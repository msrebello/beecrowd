#include <stdio.h>

int main(int argc, char const *argv[])
{
    int length;

    while (scanf("%d", &length) != EOF)
    {
        int mat[length][length];
        int x = 0, count  = 0;
        int center = length / 2;
        int inner = length / 3;

        for (int i = x; i < length; i++)
            {
                for (int j = x; j < length; j++)
                {
                    mat[i][j] = 0;

                    if (i == j)
                        mat[i][j] = 2;
                    if (i + j + 1 == length)
                        mat[i][j] = 3;
                }
                
            }

        while (inner < center)
        {
            for (int i = inner; i < length - inner; i++)
            {
                for (int j = inner; j < length - inner; j++)
                {
                    mat[i][j] = 1;
                }
            }

            inner++;   
        }

        mat[center][center] = 4;

        for (int i = 0; i < length; i++)
        {
            for (int j = 0; j < length; j++)
            {   
                printf("%d", mat[i][j]);
            }

            printf("\n");   
        }
        
        printf("\n");
    }
    

    return 0;
}
