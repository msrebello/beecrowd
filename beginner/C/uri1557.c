#include <stdio.h>
#include <math.h>

int find_count(int number);

int main(int argc, char const *argv[])
{
    int length;
    do
    {
        scanf("%d", &length);

        if (length == 0)
            break;

        int mat[length][length];

        for (int i = 0; i < length; i++)
        {
            for (int j = 0; j < length; j++)
            {
                mat[i][j] = pow(2, i + j);
            }
        }

        int T = find_count(mat[length - 1][length - 1]);

        for (int i = 0; i < length; i++)
        {
            for (int j = 0; j < length; j++)
            {
                if (j == 0)
                    printf("%*d",T, mat[i][j]);
                else
                    printf(" %*d", T, mat[i][j]);
                    
            }
            printf("\n");
        }

        printf("\n");

    } while (1);

    return 0;
}

int find_count(int number)
{
    int count = 0;

    while (number != 0)
    {
        number /= 10;
        count++;
    }

    return count;
}