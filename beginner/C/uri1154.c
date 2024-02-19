#include<stdio.h>

int main(int argc, char const *argv[]) {
    int age, sum = 0, count = 0;

    scanf("%d", &age);
    while (age >= 0)
    {
        sum += age;
        count++;
        scanf("%d", &age);
    }

    float avg = (float) sum / count;
    printf("%.2f\n", avg);
    
    return 0;
}
