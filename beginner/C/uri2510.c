/*
    @author: Matheus Rebello;
    @date: 10/04/2024;
    @name: Batmain;

*/

#include <stdio.h>

int main(int argc, char const *argv[]) {
    int n;

    scanf("%d", &n);
    getchar();
    
    while (n--) {
        char vilao[50];
        fgets(vilao, sizeof(vilao), stdin);

        printf("Y\n");
    }

    return 0;
}
