#include<stdio.h>

int main(int argc, char const *argv[])
{
    char op;
    double mat[12][12];

    scanf("%c", &op);

    for (int i = 0; i < 12; i++)
    {
        for (int j = 0; j < 12; j++)
        {
            scanf("%lf", &mat[i][j]);
        }
        
    }

    int count = 0, x = 0;
    double sum = 0;

    for (int i = 0; i < 5; i++)
    {    
        for (int j = 1 + x; j < 11 - x; j++) 
        {
            sum += mat[i][j];
            count++;
        }
        x++; 
    }
    
    switch (op)
    {
    case 'S':
        printf("%.1lf\n", sum);
        break;

    case 'M':
        printf("%.1lf\n", sum / count);
        break;    
    default:
        break;
    }

    return 0;
}
