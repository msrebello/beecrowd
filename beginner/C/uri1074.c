#include<stdio.h>

int main(int argc, char const *argv[])
{
    int n, x;
    scanf("%d", &n);

    int i = 0;
    while (i < n)
    {
        scanf("%d", &x);

        if(x == 0)
            printf("NULL\n");
        else{
            if(x % 2 == 0)
                printf("EVEN ");
            else
                printf("ODD ");

            if(x > 0)
                printf("POSITIVE\n");
            else
                printf("NEGATIVE\n");
        }
        i++;
    }
    
    return 0;
}
