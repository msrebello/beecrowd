#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    
    int a, b;
    float temp_Q = 0;

    scanf("%d %d", &a, &b);

    temp_Q = (float) a / b;
    
    int r = a % b;
    int q = 0;

    if (r < 0) {
        if (temp_Q < 0)
            q = floor(temp_Q);
        else
            q = abs(ceil(temp_Q));

        r = a - (b * q);
    }
    else {
        q = (int) temp_Q;
        r = a % b;
    }

    printf("%d %d\n", q, r);
    
    return 0;
}
