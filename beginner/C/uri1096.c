#include<stdio.h>

int main(int argc, char const *argv[])
{
    for (int i = 1, j = 7, line = 1; i <= 9;j--, line++)
    {
        printf("I=%d ", i);
        printf("J=%d\n", j);
        if(line == 3) {
            line = 0;
            i += 2;
            j += 3;
        }
    }
    
    return 0;
}
