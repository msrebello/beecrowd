#include<stdio.h>

#define WEIGHT_ONE 2
#define WEIGHT_TWO 3
#define WEIGHT_THREE 5


int main(int argc, char const *argv[])
{
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {   
        float x, y, z, sum = 0.0, avg = 0.0;
        scanf("%f %f %f", &x, &y, &z);

        avg = (x * WEIGHT_ONE + y * WEIGHT_TWO + z * WEIGHT_THREE) / (WEIGHT_ONE + WEIGHT_TWO + WEIGHT_THREE);
        printf("%.1f\n", avg);
    }
    

    return 0;
}
