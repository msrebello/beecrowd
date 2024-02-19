#include<stdio.h>
#include<math.h>

int main(int argc, char const *argv[])
{
    float frac = 1;
    for (int i = 3, j = 1; i <= 39; i+=2)
    {
        frac += i / pow(2,j++);
    }

    printf("%.2f\n", frac);
    
    return 0;
}
