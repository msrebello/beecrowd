#include<stdio.h>
#include<math.h>

void swap(double*, double*);
void decrease(double*, double*, double*);
void whichTriangleIs(double, double, double);

int main(int argc, char const *argv[])
{
    double a, b, c;
    scanf("%lf %lf %lf", &a, &b, &c);

    decrease(&a, &b, &c);
    whichTriangleIs(a, b, c);

    return 0;
}

void swap(double *first, double *second) {
    double temp = *first;
    *first = *second;
    *second = temp;
}

void decrease(double* a, double* b, double* c) {
    if(*a < *c)
        swap(a, c);
    if(*a < *b)
        swap(a, b);
    if(*b < *c)
        swap(b, c);
}

void whichTriangleIs(double a, double b, double c) {
        if(a >= b + c)
        printf("NAO FORMA TRIANGULO\n");
    else {
        if(pow(a, 2) == pow(b, 2) + pow(c, 2))
            printf("TRIANGULO RETANGULO\n");
        if(pow(a, 2) > pow(b, 2) + pow(c, 2))
            printf("TRIANGULO OBTUSANGULO\n");
        if(pow(a, 2) < pow(b, 2) + pow(c, 2))
            printf("TRIANGULO ACUTANGULO\n");
        if(a == b || a == c || b == c)
            if(a == b && a == c)
                printf("TRIANGULO EQUILATERO\n");
            else
                printf("TRIANGULO ISOSCELES\n");
    }
}