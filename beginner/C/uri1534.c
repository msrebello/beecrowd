#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num;
    while (scanf("%d", &num) != EOF)
    {
        int mat[num][num];
        int mat_length = sizeof(mat) / sizeof(mat[0]);

        for (int i = 0; i < mat_length; i++)
        {
            for (int j = 0; j < mat_length; j++)
            {
                mat[i][j] = 3;

                if (i == j)
                    mat[i][j] = 1;

                if (i + j + 1 == num)
                    mat[i][j] = 2;
            }
        }

        for (int i = 0; i < mat_length; i++)
        {
            for (int j = 0; j < mat_length; j++)
            {
                printf("%d", mat[i][j]);
            }

            printf("\n");
        }
    }

    return 0;
}
