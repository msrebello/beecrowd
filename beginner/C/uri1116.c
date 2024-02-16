#include<stdio.h>

int main(int argc, char const *argv[]) {
    int n;
    int x, y;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {   
        float frac = 0.0;
        scanf("%d %d", &x, &y);
        if(y == 0)
            printf("divisao impossivel\n");
        else {
            frac = (float) x / y;
            printf("%.1f\n", frac);
        }      
    }
    
    return 0;
}
