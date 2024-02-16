#include<stdio.h>

int main(int argc, char const *argv[])
{
    for (int i = 1, j = 60; j >= 0; i += 3)
    {
        printf("I=%d ", i);
        printf("J=%d\n", j);
        j -= 5;
    }
    
    return 0;
}
