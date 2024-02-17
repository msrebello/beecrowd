#include<stdio.h>

int main(int argc, char const *argv[])
{
    int x, y;
    scanf("%d %d", &x, &y);

    for (int i = 1, j = 0; i <= y;)
    {
        for (int j = 0; j < x; j++, i++)
        {
            if(i > y) {
                printf("\n");
                break;
            }
            if(j < x - 1)
            printf("%d " , i);
            else
                printf("%d\n", i);
        }
    }
    
    return 0;
}
