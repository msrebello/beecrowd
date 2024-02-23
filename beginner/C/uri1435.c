#include <stdio.h>

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

            int quo = size / 2;
            int rest = size % 2;
            int x = 1;
            int aux = 0;

            while (aux < size)
            {
                for (int i = aux; i < size - aux; i++)
                {
                    for (int j = aux; j < size - aux; j++)
                    {
                        mat[i][j] = x;
                    }
                }

                x++;
                aux++;
            }

            if (rest != 0)
                mat[quo][quo] = quo + 1;

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
