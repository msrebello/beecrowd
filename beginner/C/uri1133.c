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

    for (int i = x + 1; i < y; i++)
    {
        if(i % 5 == 2 || i % 5 == 3)  
            printf("%d\n", i);
    }
    
    return 0;
}
