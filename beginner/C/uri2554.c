/*
    @author: Matheus Rebello;
    @date: 24/04/2024;
    @name: Pizza Antes de BH;

*/

#include <stdio.h>
#include <stdbool.h>

int datas = 0;

int soma_participantes(int arr[], int size) {
    int soma = 0;
    for (int i = 0; i < size; i++) {
        soma += arr[i];
    }
    
    return soma;
}

int main(int argc, char const *argv[]) {

    int N;
    int T;

    while (scanf("%d %d", &N, &T) != EOF) {

        int presentes[N];
        int dia[T];
        int mes[T];
        int ano[T];
        int d, m, a;

        for (int i = 0; i < T; i++) {
            scanf("%d/%d/%d", &d, &m, &a);
            
            for (int j = 0; j < N; j++) {
               scanf("%d", &presentes[j]);
            }

            if(soma_participantes(presentes, N) == N) {
                dia[datas] = d;
                mes[datas] = m;
                ano[datas] = a;

                datas++;
            } 
        }
        
        if (datas == 0) {
            printf("Pizza antes de FdI\n");
        } else {
            int indice = datas - 1;

            int menor_a = ano[indice];
            int menor_m = mes[indice];
            int menor_d = dia[indice];

            for (int i = 0; i < datas; i++) {
                if (ano[i] == menor_a) {
                    if (mes[i] == menor_m) {
                        if (dia[i] < menor_d) {
                            menor_a = ano[i];
                            menor_m = mes[i];
                            menor_d = dia[i];
                        }
                    } else if (mes[i] < menor_m) {
                        menor_a = ano[i];
                        menor_m = mes[i];
                        menor_d = dia[i];
                    }
                } else if (ano[i] < menor_a) {
                    menor_a = ano[i];
                    menor_m = mes[i];
                    menor_d = dia[i];
                }
            }

            printf("%d/%d/%d\n", menor_d, menor_m, menor_a);
        }

        datas = 0;
    }
     
    return 0;
}

