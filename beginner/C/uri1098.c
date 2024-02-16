#include <stdio.h>

int main()
{
    float frac = 0.0;

    for (int i = 0; i <= 20; i+=2)
    {
        frac = i / 10.f;
        for (int j = 1; j <= 3; j++)
        {
            printf("I=%g J=%g\n", frac, j + frac);
        }  
    }

    return 0;
}