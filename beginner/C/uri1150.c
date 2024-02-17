#include<stdio.h>

int main(int argc, char const *argv[])
{
    int x, z, sum = 0;
    scanf("%d ", &x);

    do
    {
        scanf("%d", &z);
        if(z > x) {
        sum = x;

        int i = 1, count = 1;
        while (sum <= z)
        {
            sum += x + i;
            i++;
            count++;

        }

        printf("%d\n", count);
        }
            
    } while (x >= z);
    
    return 0;
}
