/*
    @author: Matheus Rebello;
    @date: 11/03/2024;
    @name: Searching Subsequences;

*/


#include <stdio.h>
#include <string.h>

int main()
{

    char str1[12], str2[50];
    int round = 0;
    while (scanf("%s %s", str1, str2) != EOF)
    {
        int len_str1 = strlen(str1);
        int len_str2 = strlen(str2);

        int count = 0, sub = 0, pos = 0;
        int i, j;
        for (i = 0; i <= (len_str2 - len_str1); i++)
        {
            for (j = 0; j < len_str1; j++)
            {
                if (str1[j] != str2[i + j]) break;
                else count++;
                if (count == len_str1) {
                    pos = i + 1;
                    sub++;
                }
            }
            count = 0;
        }

        if (!sub)
            printf("Caso #%d:\nNao existe subsequencia\n", ++round);
        else
        {
            printf("Caso #%d:\n", ++round);
            printf("Qtd.Subsequencias: %d\n", sub);
            printf("Pos: %d\n", pos);
        }

        printf("\n");
    }

    return 0;
}