/*
    @author: Matheus Rebello;
    @date: 19/03/2024;
    @name: Fast Fibonacci;

*/

#include <stdio.h>
#include <math.h>

double calcular_fibo(short n);
void mostrar_resultado();

int main(int argc, char const *argv[])
{
    short n;
    scanf("%hd", &n);

    printf("%.1lf\n", calcular_fibo(n));
    return 0;
}

double calcular_fibo(short n) 
{
    return (pow((1 + sqrt(5)) / 2, n) - pow((1 - sqrt(5)) / 2, n)) / sqrt(5);
}
