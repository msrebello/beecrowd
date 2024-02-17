#include<stdio.h>
#include<math.h>

int main(int argc, char const *argv[])
{
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
            printf("%d %g %g\n", i, pow(i,2), pow(i,3));
    }
    
    return 0;
}
