#include<stdio.h>

int main(int argc, char const *argv[])
{
    int n, x, in = 0, out = 0;
    scanf("%d", &n);

    int i = 0;
    while (i < n)
    {
        scanf("%d", &x);
        if(x >= 10 && x <=20)
            in++;
        else
            out++;

        i++;
    }

    printf("%d in\n", in);
    printf("%d out\n", out);
    
    return 0;
}
