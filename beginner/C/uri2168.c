/*
    @author: Matheus Rebello;
    @date: 01/03/2024;
    @name: Crepúsculo em Portland;

*/

#include <stdio.h>


int main(int argc, char const *argv[])
{
    int n;

    scanf("%d", &n);

    int length = n + 1;
    int mat[length][length];
    
    for (int i = 0; i < length; i++)
        for (int j = 0; j < length; j++)
            scanf("%d", &mat[i][j]);
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (mat[i][j] + mat[i][j + 1] + mat[i + 1][j] + mat[i + 1][j + 1] >= 2)
                printf("S");
            else
                printf("U");
        }
        printf("\n");
    }

        
    return 0;
}