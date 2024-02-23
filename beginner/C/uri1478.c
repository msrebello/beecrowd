#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int size;

    while (1)
    {

        scanf("%d", &size);

        if (size == 0 || size > 100)
            break;

        else
        {
            int mat[size][size];

            for (int i = 0; i < size; i++)
            {
                for (int j = 0; j < size; j++)
                {
                    if (i == j)
                        mat[i][j] = 1;

                    else // if i > j or j > i
                        mat[i][j] = abs(i - j) + 1;
                }
            }
            for (int i = 0; i < size; i++)
            {
                for (int j = 0; j < size; j++)
                {
                    if (j == 0)
                        printf("%3d", mat[i][j]);
                    else
                        printf(" %3d", mat[i][j]);
                }

                printf("\n");
            }

            printf("\n");
        }
    }

    return 0;
}
