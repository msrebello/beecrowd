#include <stdio.h>
#include <stdbool.h>

#define EVEN 0

bool equal(const char *str1, const char *str2);

int main(int argc, char const *argv[])
{
    int QT;
    char p1[100], p2[100], even_or_odd1[6], even_or_odd2[6];
    unsigned long int number_p1, number_p2, result = 0;

    scanf("%d", &QT);

    for (short i = 1; i <= QT; i++)
    {
        scanf("%s %s %s %s", p1, even_or_odd1, p2, even_or_odd2);
        scanf("%lu %lu", &number_p1, &number_p2);

        result = number_p1 + number_p2;

        if (result % 2 == EVEN)
            if (equal(even_or_odd1, "PAR"))
                printf("%s\n", p1);
            else
                printf("%s\n", p2);
        else if (equal(even_or_odd1, "IMPAR"))
            printf("%s\n", p1);
        else
            printf("%s\n", p2);
    }

    return 0;
}

bool equal(const char *str1, const char *str2)
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