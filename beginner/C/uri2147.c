/*
    @author: Matheus Rebello;
    @date: 13/03/2024;
    @name: Galopeira;

*/

#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{  
    char sen[10001];
    unsigned short test;

    scanf("%hu", &test);

    while (test--) 
    {   
        scanf("%s", sen);

        float time_spent = strlen(sen) * 0.01;

        printf("%.2f\n", time_spent);
    }
     
    return 0;
}
