/*
    @author: Matheus Rebello;
    @date: 12/03/2024;
    @name: Password;

*/

#include <stdio.h>

int find_password(unsigned short value);

int main(int argc, char const *argv[])
{
    
    unsigned short test;

    while (scanf("%hu", &test) != EOF) 
    {   
        printf("%hu\n", find_password(test));
    }
     
    return 0;
}

int find_password(unsigned short value) {
    return --value;
}