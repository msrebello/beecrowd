#include<stdio.h>

int main(int argc, char const *argv[])
{
    int column;
    char op;
    float mat[12][12];

    scanf("%d\n", &column);
    scanf("%c", &op);

    for (int i = 0; i < 12; i++)
    {
        for (int j = 0; j < 12; j++)
        {
            scanf("%f", &mat[i][j]);
        }
        
    }

    float sum = 0;

    for (int i = 0; i < 12; i++)
    {
        sum += mat[i][column];
    }
    
    switch (op)
    {
    case 'S':
        printf("%.1f\n", sum);
        break;

    case 'M':
        printf("%.1f\n", sum / 12.f);
        break;    
    default:
        break;
    }

    return 0;
}
