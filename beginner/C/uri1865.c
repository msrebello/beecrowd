#include <stdio.h>
#include <stdbool.h>

bool equal(const char* str1, const char* str2);

int main(int argc, char const *argv[])
{
    int C;
    char name[50];

    scanf("%d", &C);

    int N;

    while (C--)
    {
        scanf("%s %d", name, &N);

        if (equal(name, "Thor"))
            printf("Y\n");
        else
            printf("N\n");
    }

    return 0;
}

bool equal(const char* str1, const char* str2)
{   
    int i = 0;
    for (i = 0; str1[i] != '\0' && str2[i] != '\0'; i++)
    {
        if (str1[i] != str2[i])
            return false;
    }

    if (str1[i] == '\0' && str2[i] == '\0')
        return true;
    else
        return false;
    
}
