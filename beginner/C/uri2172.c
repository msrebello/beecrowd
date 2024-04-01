/*
    @author: Matheus Rebello;
    @date: 01/03/2024;
    @name: Evento;

*/

#include <stdio.h>


int main(int argc, char const *argv[])
{   
    long long x, m;

    scanf("%lld %lld", &x, &m);

    while (x != 0 || m != 0)
    {
        printf("%lld\n", x * m);

        scanf("%lld %lld", &x, &m);
    }
        
    return 0;
}