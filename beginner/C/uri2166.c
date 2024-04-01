/*
    @author: Matheus Rebello;
    @date: 01/03/2024;
    @name: Square Root of 2;

*/

#include <stdio.h>

#define CONST 1.F

int main(int argc, char const *argv[])
{
    int n;
    scanf("%d", &n);

    if (n == 0)
        printf("%.10lf\n", CONST);
    else {
        double temp = 0;
        while (n--)
        {
            temp = 1 / (2.F + temp);
        }

        printf("%.10lf\n", CONST + temp);
    }
        
    return 0;
}

