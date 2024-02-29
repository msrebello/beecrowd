#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n;
    char course[100];

    scanf("%d", &n);

    for (short i = 1; i <= n; i++)
    {   
        scanf("\n");
        scanf("%[^\n]%*c", course);
    }

    printf("Ciencia da Computacao\n");
    
    return 0;
}
