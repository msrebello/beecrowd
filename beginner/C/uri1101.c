#include<stdio.h>

 void swap(int*, int*);

int main(int argc, char const *argv[])
{
    int m, n;
    scanf("%d %d", &m, &n);

    while(m > 0 && n > 0) {
        

        if(m > n)
            swap(&m, &n);

        int sum = 0;
        for (int i = m; i <= n; i++)
        {
            sum += i;
            printf("%d ", i);
        }
        
        printf("Sum=%d\n", sum);

        scanf("%d %d", &m, &n);
    }
    return 0;
}

void swap(int* first, int* second) {
    int temp = *first;
    *first = *second;
    *second = temp;
}