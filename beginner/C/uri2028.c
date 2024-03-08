/*

    @author: Matheus Rebello;
    @date: 07/03/2024;
    @name: Sequence of Sequence;

*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    unsigned short int n;
    short cases = 1;

    
    while (scanf("%hd", &n) != EOF)
    {
        int numbers = 1;

        for (unsigned short i = 0; i <= n; i++)
            for (unsigned short j = 0; j < i; j++)
                numbers++;

        if (n == 0)
            printf("Caso %d: %d numero\n", cases++, numbers);
        else
            printf("Caso %d: %d numeros\n", cases++, numbers);

        for (unsigned short i = 0; i <= n; i++)
        {
            if (i == 0) 
                printf("%hi", i);

            for (unsigned short j = 0; j < i; j++)
                printf(" %hi", i);
        }

        printf("\n\n");
    }
    
    return 0;
}
