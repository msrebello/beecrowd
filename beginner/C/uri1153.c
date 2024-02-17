#include<stdio.h>

int main(int argc, char const *argv[])
{
    int n, fat = 1;
    scanf("%d", &n);

    for (int i = n; i >= 1; i--)
    {
        fat *= i;
    }
    
    printf("%d\n", fat);

    return 0;
}
