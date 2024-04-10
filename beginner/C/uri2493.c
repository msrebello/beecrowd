/*
    @author: Matheus Rebello;
    @date: 08/04/2024;
    @name: Jogo do Operador;

*/

#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[]) {
    int T;
    int index;
    char op;
    
    while (scanf("%d", &T) != EOF) {
        int X[50];
        int Y[50];
        int Z[50];

        for (int i = 0; i < T; i++) {
            scanf("%d %d=%d", &X[i], &Y[i], &Z[i]);
        }   

        int passou = 0;
        int x = 0;
        char nome[51];
        char quem_nao_passou[50][51];
        for (int i = 0; i < T; i++) {
            scanf("%s %d %c", nome, &index, &op);
            
            switch (op) {
                case '+':
                    if (X[index - 1] + Y[index - 1] == Z[index - 1]) {
                        passou++;
                    } else {
                        strcpy(quem_nao_passou[x++], nome);
                    }
                    break;
                case '-':
                    if (X[index - 1] - Y[index - 1] == Z[index - 1]) {
                        passou++;
                    } else {
                        strcpy(quem_nao_passou[x++], nome);
                    }
                    break;
                case '*':
                    if (X[index - 1] * Y[index - 1] == Z[index - 1]) {
                        passou++;
                    } else {
                        strcpy(quem_nao_passou[x++], nome);
                    }
                    break;
                case 'I':
                    if (X[index - 1] + Y[index - 1] != Z[index - 1] &&
                        X[index - 1] - Y[index - 1] != Z[index - 1] &&
                        X[index - 1] * Y[index - 1] != Z[index - 1]) {
                        passou++;
                    } else {
                        strcpy(quem_nao_passou[x++], nome);
                    }
                    break;
                default:
                    break;
            }
        }

        if(!passou) {
            printf("None Shall Pass!\n");
        } else if (passou == T) {
            printf("You Shall All Pass!\n");
        } else {
            char aux[50];
            int n_pass = T - passou;
            int i;

            for (i = 0; i < n_pass; i++) {
                for (int j = i + 1; j < n_pass; j++) {
                    if (strcmp(quem_nao_passou[i], quem_nao_passou[j]) > 0) {
                        strcpy(aux, quem_nao_passou[i]);
                        strcpy(quem_nao_passou[i], quem_nao_passou[j]);
                        strcpy(quem_nao_passou[j], aux);
                    }
                }
            }

            for (i = 0; i < n_pass - 1; i++) {
                printf("%s ", quem_nao_passou[i]);
            }
            printf("%s\n", quem_nao_passou[i]);
        }     
    }

    return 0;
}