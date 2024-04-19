/*
    @author: Matheus Rebello;
    @date: 19/04/2024;
    @name: Kage Bunshin no Jutsu;

*/

#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[]) {
    int n;
    
    while (scanf("%d", &n) != EOF) {
        printf("%d\n", (int) log2(n));
    }

    return 0;
}
