#include<stdio.h>

int main(int argc, char const *argv[])
{
    char op;
    float mat[12][12];

    scanf("%c", &op);

    for (int i = 0; i < 12; i++)
    {
        for (int j = 0; j < 12; j++)
        {
            scanf("%f", &mat[i][j]);
        }
        
    }

    int count = 0, x = 0;
    float sum = 0;

    for (int i = 11; i >= 1; i--)
    {    
        for (int j = 1 + x; j < 12; j++) 
        {
            sum += mat[i][j];
            count++;
        }
        x++; 
    }
    
    switch (op)
    {
    case 'S':
        printf("%.1f\n", sum);
        break;

    case 'M':
        printf("%.1f\n", sum / count);
        break;    
    default:
        break;
    }

    return 0;
}
