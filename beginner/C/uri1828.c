#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool equal(const char* str1, const char* str2);

int main(int argc, char const *argv[])
{
    int T;
    char raj[10], sheldon[10];

    scanf("%d:", &T);

    for (int i = 1; i <= T; i++)
    {
        scanf("%s", sheldon);
        scanf(" %s", raj);

        if (equal(sheldon, raj))
            printf("Caso #%d: De novo!\n", i);
        else {
            if (equal(sheldon, "tesoura")) {
                if (equal(raj, "papel") || equal(raj, "lagarto"))
                printf("Caso #%d: Bazinga!\n", i);
                else
                    printf("Caso #%d: Raj trapaceou!\n", i);
            }
            else if (equal(sheldon, "papel")) {
                if (equal(raj, "pedra")|| equal(raj, "Spock"))
                    printf("Caso #%d:: Bazinga!\n", i);
                else
                    printf("Caso #%d: Raj trapaceou!\n", i);
            }
            else if (equal(sheldon, "lagarto")) {
                if (equal(raj, "papel")|| equal(raj, "Spock"))
                    printf("Caso #%d: Bazinga!\n", i);
                else
                    printf("Caso #%d: Raj trapaceou!\n", i);
            }
            else if (equal(sheldon, "Spock")) {
                if (equal(raj, "tesoura")|| equal(raj, "pedra")) 
                    printf("Caso #%d: Bazinga!\n", i);
                else
                    printf("Caso #%d: Raj trapaceou!\n", i);
            }
            else if (equal(sheldon, "pedra")) {
                if (equal(raj, "lagarto")|| equal(raj, "tesoura"))
                printf("Caso #%d: Bazinga!\n", i);
            else
                printf("Caso #%d: Raj trapaceou!\n", i);
            }
        }

    }
    
    return 0;
}

bool equal(const char* str1, const char* str2) {

    int i = 0;
    for (i = i; str1[i] != '\0' && str2[i] != '\0'; i++)
    {
        if (str1[i] != str2[i])
            return false;
    }

    if (str1[i] == '\0' && str2[i] == '\0')
        return true;
    else
        return false;
}
