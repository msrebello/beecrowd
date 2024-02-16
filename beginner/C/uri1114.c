#include<stdio.h>

int main(int argc, char const *argv[])
{
    int passwd;
    scanf("%d", &passwd);

    while (passwd != 2002)
    {
        printf("Senha Invalida\n");
        scanf("%d", &passwd);
    }
    printf("Acesso Permitido\n");
    
    return 0;
}
