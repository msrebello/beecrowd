#include<stdio.h>

int main(int argc, char const *argv[])
{
    int x, y, major = 0;
    scanf("%d\n%d", &x, &y);

    if(x > y) {
        major = x;
        x = y;
        y =  major;
    }

    int sum = 0;

    for (int i = x; i <= y; i++)
    {
        if(i % 13 != 0)  
            sum += i;
    }

    printf("%d\n", sum);
    
    return 0;
}
