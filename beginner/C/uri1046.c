#include<stdio.h>

int calculateDuration(int, int);

int main(int argc, char const *argv[])
{
    int start, end;
    scanf("%d %d", &start, &end);

    printf("O JOGO DUROU %d HORA(S)\n", calculateDuration(start, end));

    return 0;
}

int calculateDuration(int s, int e) {
    return (e < s || e == s) ? 24 + e - s : e - s;
}