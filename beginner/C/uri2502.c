/*
    @author: Matheus Rebello;
    @date: 10/04/2024;
    @name: Decifrando a Carta Criptografada;

*/

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int global = 0;

char getmatch(char src[][global], char target, int len);
char getuppermatch(char src[][global], char target, int len);
char getlowermatch(char src[][global], char target, int len);
bool issimbol(char c);
bool isupper(char c);

int main(int argc, char const *argv[]) {
    int size;
    int N;

    while (scanf("%d %d", &size, &N) != EOF) {

        getchar();

        size++;
        global = size;
        char cifra[2][size];
        char frase[N][1100];

        fgets(cifra[0], sizeof(cifra), stdin);
        fgets(cifra[1], sizeof(cifra), stdin);
        
        for (int i = 0; i < N; i++) { 
            fgets(frase[i], sizeof(frase), stdin);
            for (size_t j = 0; j < strlen(frase[i]) - 1; j++) {
                char current = frase[i][j];
                if (issimbol(current)) {
                    putchar(getmatch(cifra, current, size));
                } else if (isupper(current)) {
                    putchar(getuppermatch(cifra, current, size));
                } else {
                    putchar(getlowermatch(cifra, current, size));
                }
            }

            printf("\n");
        }

        printf("\n");
    } 

    return 0;
}

bool isupper(char c) {
    return c >= 'A' && c <= 'Z';
}

bool issimbol(char c) {
    return c < 'A' || c > 'Z' && c < 'a' || c > 'z';
}

char getuppermatch(char src[][global], char target, int len) {
    char current;

    for (int i = 0; i < len; i++) {
        current = src[0][i];
        if (target ==  current) {
            return src[1][i];
        }
    }

    for (int i = 0; i < len; i++) {
        current = src[1][i];
        if (target ==  current) {
            return src[0][i];
        }
    }

    return target; 
}

char getlowermatch(char src[][global], char target, int len) {
    char current;

    for (int i = 0; i < len; i++) {
        current = src[0][i] + 32;
        if (target ==  current) {
            return issimbol(src[1][i]) ? src[1][i] : src[1][i] + 32;
        }
    }

    for (int i = 0; i < len; i++) {
        current = src[1][i] + 32;
        if (target == current) {
            return issimbol(src[0][i]) ? src[0][i] : src[0][i] + 32;
        }
    }

    return target; 
}

char getmatch(char src[][global], char target, int len) {
    char current;

    for (int i = 0; i < len; i++) {
        current = src[0][i];
        if (target ==  current) {
            return src[1][i] + 32;
        }
    }

    for (int i = 0; i < len; i++) {
        current = src[1][i];
        if (target ==  current) {
            return src[0][i] + 32;
        }
    }

    return target; 
}