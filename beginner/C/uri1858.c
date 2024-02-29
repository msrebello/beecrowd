#include <stdio.h>

int main(int argc, char const *argv[])
{
    unsigned short N, T, pos = 0, menor = 20;

    scanf("%hu", &N);

    

    for (unsigned short i = 1; i <= N; i++)
    {
        scanf("%hu", &T);

        if(T < menor) {
            menor = T;
            pos = i;
        }
    }

    printf("%hu\n", pos);
    
    return 0;
}
