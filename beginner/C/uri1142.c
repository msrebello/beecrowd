#include<stdio.h>

int main(int argc, char const *argv[])
{
    int n, x = 1;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 4; j++, x++)
        {
            if(j == 3)
                printf("PUM\n");
            else
                printf("%d ", x);
        }   
    }
    
    return 0;
}
