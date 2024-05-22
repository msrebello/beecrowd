/*
    @author: Matheus Rebello;
    @date: 03/05/2024;
    @name: Escala de Cinza;

*/

#include <stdio.h>

int getmax(int r, int g, int b);
int getmin(int r, int g, int b);
int getP(char s[], int r, int g, int b);


int main(int argc, char const *argv[]) {
    int T;
    int i = 1;
    
    scanf("%d", &T);
    getchar();
    
    while (T--) {
        char conversao[4];
        
        int R;
        int G;
        int B;

        scanf("%s", conversao);
        scanf("%d %d %d", &R, &G, &B);

        printf("Caso #%d: %d\n", i++, getP(conversao, R, G, B));
    }

    return 0;
}


int getP(char s[], int r, int g, int b) {
    if (s[1] == 'i') {
        return getmin(r, g, b);
    } else if (s[1] == 'a') {
        return getmax(r, g, b);
    } else if (s[1] == 'e') {
        return (r + g + b) / 3;
    } else {
        return 0.3 * r + 0.59 * g + 0.11 * b;
    }
   
}


int getmin(int r, int g, int b) {
    if (r < g && r < b)
        return r;
    else if (g < b)
        return g;
    else
        return b;
}


int getmax(int r, int g, int b) {
    if (r > g && r > b)
        return r;
    else if (g > b)
        return g;
    else
        return b;
}




