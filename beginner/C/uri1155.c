#include<stdio.h>

int main(int argc, char const *argv[])
{
    float frac = 0;
    for (int i = 1; i <= 100; i++)
    {
        frac += 1.f / i;
    }
    
    printf("%.2f\n", frac);
    
    return 0;
}
