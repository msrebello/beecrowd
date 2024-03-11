/*
    @author: Matheus Rebello;
    @date: 08/03/2024;
    @name: Bino's Challenge;

*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    
    unsigned short two = 0, three = 0, four = 0, five = 0;
    short int n, num;

    scanf("%hd", &n);

    while (n--)
    {
        scanf(" %hd", &num);

        if (num % 2 == 0) two++;
        if (num % 3 == 0) three++;
        if (num % 4 == 0) four++;
        if (num % 5 == 0) five++;
    }

    printf("%hd Multiplo(s) de 2\n", two);
    printf("%hd Multiplo(s) de 3\n", three);
    printf("%hd Multiplo(s) de 4\n", four);
    printf("%hd Multiplo(s) de 5\n", five);


    return 0;
}
