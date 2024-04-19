/*
    @author: Matheus Rebello;
    @date: 17/04/2024;
    @name: Novo Recorde;

*/

#include <stdio.h>

int main(int argc, char const *argv[]) {
    int n;
    
    while (scanf("%d", &n) != EOF) {
        double recorde_vm = 0;

        int i = 1;
        do {
            int t, d;
            
            scanf("%d %d", &t, &d);

            double t_horas = t / 60.f;
            double vm_atual = d / t_horas;

            if (i == 1) {
                printf("1\n");
                recorde_vm = vm_atual;
            } else {
                if (vm_atual > recorde_vm) {
                    recorde_vm = vm_atual;
                    printf("%d\n", i);
                }
            } 
            i++;

        } while (i <= n);
    }

    return 0;
}
