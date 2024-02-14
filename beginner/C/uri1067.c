#include<stdio.h>

int main(int argc, char const *argv[])
{
    int X;
    scanf("%d", &X);

    for (int i = 1; i <= X; i+=2)
    {
        printf("%d\n", i);
    }
    
    return 0;
}
