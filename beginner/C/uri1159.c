#include<stdio.h>

int main(int argc, char const *argv[])
{
    int x;
    scanf("%d", &x);

    while (x != 0)
    {
        int sum = 0, count = 0;
        for (int j = x; count < 5;j++)
        {
            if(j % 2 == 0) {
                sum += j;
                count++;
            }
        }
        printf("%d\n", sum);
        scanf("%d", &x);
    }
    
    return 0;
}
