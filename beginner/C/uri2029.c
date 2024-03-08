/*

    @author: Matheus Rebello;
    @date: 08/03/2024;
    @name: Honey Reservoir;

*/

#include <stdio.h>
#include <math.h>

#define PI 3.14

double get_radios(double diameter);
double heigth(double volume, double diameter);
double area(double diameter);

int main(int argc, char const *argv[])
{
    double vol, di;

    while (scanf("%lf %lf", &vol, &di) != EOF)
    {
        printf("ALTURA = %.2lf\n", heigth(vol, di));
        printf("AREA = %.2lf\n", area(di));
    }
    
    return 0;
}

double get_radios(double diameter) {
    return diameter / 2.f;
}

double heigth(double volume, double diameter) {
    return volume / (PI * pow(get_radios(diameter), 2));
}

double area(double diameter) {
    return PI * pow(get_radios(diameter), 2);
}