#include<stdio.h>

int main(int argc, char const *argv[])
{
    int term, first = 0, second = 0;
    scanf("%d", &term);

    int fibo[term];
    fibo[0] = 0;
    fibo[1] = 1;

    for (int i = 2; i < term; i++) {
            fibo[i] = fibo[i - 1] + fibo[i - 2];
        }
        

    for (int i = 0; i < term; i++) {

        if(i < term - 1)
            printf("%d ", fibo[i]);
        else
            printf("%d\n", fibo[i]);
    }

    return 0;
}
