#include<stdio.h>

int main(int argc, char const *argv[])
{
    int n;
    int x, y, major;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {   
        scanf("%d %d", &x, &y);

        if(x > y) {
            major = x;
            x = y;
            y = major;
        }

        int sum = 0;
        for (int j = x + 1; j < y ; j++)
        {
            if(j % 2 != 0)
                sum += j;
        }
        printf("%d\n", sum);
        
    }

    return 0;
}
