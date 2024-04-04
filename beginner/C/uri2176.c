/*
    @author: Matheus Rebello;
    @date: 03/03/2024;
    @name: Paridade;

*/

#include <stdio.h>

int conta_uns(char str[]);

int main(int argc, char const *argv[])
{

    char s[100];
    
    scanf("%s", s);

    if (conta_uns(s) % 2 == 0) {
        printf("%s0\n", s);
    } else {
        printf("%s1\n", s);
    }

    return 0;
}

int conta_uns(char str[]) {
    int cont = 0;

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == '1') {
            cont++;
        }
    }
    
    return cont;
}
