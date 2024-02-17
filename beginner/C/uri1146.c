#include<stdio.h>

int main(int argc, char const *argv[])
{
    int x;
    
    do
    {
        scanf("%d", &x);

        for (int i = 1; i <= x; i++)
        {
            if(i < x)
                printf("%d ", i);
            else
                printf("%d\n", i);
        }
        

    } while (x != 0);

    return 0;
}
