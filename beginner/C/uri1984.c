/*

    @author: Matheus Rebello;
    @date: 06/03/2024;
    @name: The Pronalância Puzzle;

*/

#include <stdio.h>
int get_quotient(long long int *value);

int main(int argc, char const *argv[])
{
    long long int num;
    int r = 0;

    scanf("%llu", &num);

    do 
    {
        r = num % 10;
        num /= 10;

        printf("%d", r);
        
    } while (num);

    printf("\n");

    return 0;
}
