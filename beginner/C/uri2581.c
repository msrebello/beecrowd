/*
    @author: Matheus Rebello;
    @date: 10/04/2024;
    @name: I am Toorg!;

*/

#include <stdio.h>

int main(int argc, char const *argv[]) {
    int n;

    scanf("%d", &n);
    getchar();
    
    while (n--) {
        char s[200];
        fgets(s, sizeof(s), stdin);

        printf("I am Toorg!\n");
    }

    return 0;
}
