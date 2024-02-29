#include <stdio.h>

int main(int argc, char const *argv[])
{
    unsigned short N;
    char sen[50] = {' ', 'L','I','F','E',' ','I','S',' ','N','O','T',' ','A',' ','P','R','O','B','L','E','M',' ','T','O',' ','B','E',' ','S','O','L','V','E','D'};

    scanf("%hu", &N);

    for (unsigned short i = 1; i <= N; i++)
    {
        printf("%c", sen[i]);
    }
    
    printf("\n");
    
    return 0;
}
