#include <stdio.h>

#define MAX_YEARS 2015

int main(int argc, char const *argv[])
{
    int cases;
    int T;

    scanf("%d", &cases);

    while (cases--)
    {

        scanf("%d",&T);

        if(T < MAX_YEARS)
            printf("%d D.C.\n", MAX_YEARS - T);
        else
            printf("%d A.C.\n", T - MAX_YEARS + 1);

    }
    
    return 0;
}
