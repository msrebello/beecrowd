/*
    @author: Matheus Rebello;
    @date: 23/05/2024;
    @name: Keanu;

*/


#include <stdio.h>
 
int main() {
 
    int n;
    scanf("%d", &n);

    int a = (n * n) / 2;
    
    if (n % 2 == 0) {
        printf("%d casas brancas e %d casas pretas\n", a, a);
    } else {
        printf("%d casas brancas e %d casas pretas\n", a + 1, a);
    }
    
 
    return 0;
}