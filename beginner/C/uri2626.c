/*
    @author: Matheus Rebello;
    @date: 24/04/2024;
    @name: Turma do JB6;

*/

#include <stdio.h>
#include <stdbool.h>

bool equals(const char str1[], const char str2[]);

int main(int argc, char const *argv[]) {
    char d[8], l[8], p[8];
    char mensagem[4][200] = {
        "Os atributos dos monstros vao ser inteligencia, sabedoria...", // d
        "Iron Maiden's gonna get you, no matter how far!", // l
        "Urano perdeu algo muito precioso...", // p
        "Putz vei, o Leo ta demorando muito pra jogar..."}; // empate

    while (scanf("%s %s %s", d, l, p) != EOF) {

        if ((equals(d, l) && equals(l, p)) || (!equals(d, l) && !equals(d, p) && !equals(l, p))) { // mostra mensagem de empate se forem todos iguais ou diferentes
            printf("%s\n", mensagem[3]);
        } else {
            if (equals(d, "pedra")) { // 
                if (equals(l, "pedra")) {
                    if (equals(p, "papel")) {
                        printf("%s\n", mensagem[2]); 
                    } else {
                        printf("%s\n", mensagem[3]);
                    }
                } else if (equals(l, "papel")) {
                    if (equals(p, "pedra")) { 
                        printf("%s\n", mensagem[1]);
                    } else {
                        printf("%s\n", mensagem[3]);
                    }
                } else {
                     if (equals(p, "pedra")) { 
                        printf("%s\n", mensagem[3]);
                    } else { 
                        printf("%s\n", mensagem[0]);
                    }
                }
            } else if (equals(d, "papel")) { 
                if (equals(l, "pedra")) { 
                     if (equals(p, "pedra")) { 
                        printf("%s\n", mensagem[0]);
                    } else {
                        printf("%s\n", mensagem[3]);
                    }
                } else if (equals(l, "papel")) {
                    if (equals(p, "pedra")) {
                        printf("%s\n", mensagem[3]);
                    } else {
                        printf("%s\n", mensagem[2]);
                    }
                } else { 
                     if (equals(p, "papel")) { 
                        printf("%s\n", mensagem[1]);
                    } else  {
                        printf("%s\n", mensagem[3]);
                    } 
                }
            } else {
                if (equals(l, "pedra")) { 
                     if (equals(p, "pedra")) { 
                        printf("%s\n", mensagem[3]);
                    } else { 
                        printf("%s\n", mensagem[1]);
                    }
                } else if (equals(l, "papel")) {
                    if (equals(p, "papel")) {
                        printf("%s\n", mensagem[0]);
                    } else { 
                        printf("%s\n", mensagem[3]);
                    }
                } else {
                    if (equals(p, "pedra")) {
                        printf("%s\n", mensagem[2]);
                    } else {
                        printf("%s\n", mensagem[3]);
                    }
                }
            }
        }
    }

    return 0;
}

bool equals(const char str1[], const char str2[]) {
    int i;

    for (i = 0; str1[i] != '\0' && str2[i] != '\0'; i++) {
        if (str1[i] != str2[i]) {
            return false;
        }
    }

    if (str1[i] == '\0' && str2[i] == '\0') {
        return true;
    } else {
        return false;
    }   
}
