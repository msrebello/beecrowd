/*
    @author: Matheus Rebello;
    @date: 10/04/2024;
    @name: PãodeQuejoSweeper;

*/

#include <stdio.h>

int main(int argc, char const *argv[]) {
    int m, n;
    
    while (scanf("%d %d", &n, &m) != EOF) {
        int mat[n][m];

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                scanf("%d", &mat[i][j]);
            }
        }
        
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (mat[i][j] == 1) {
                    printf("9");
                } else {
                    int lmt_y = n - 1;
                    int lmt_x = m - 1;
                    int soma = 0;

                    if (i == 0) {
                        if (n == 1) { // i == 0
                            if (j == i) { 
                                soma += mat[i][j + 1];
                            } else if (j < lmt_x) {
                                soma += mat[i][j - 1] + mat[i][j + 1];
                            } else {
                                soma += mat[i][j - 1];
                            }
                        } else { // i > 0
                            if (m == 1) {
                                soma += mat[i + 1][j];
                            } else  {
                                if (j == i) {
                                    soma += mat[i + 1][j] + mat[i][j + 1];
                                } else if (j < lmt_x) {
                                    soma += mat[i][j - 1] + mat[i][j + 1] + mat[i + 1][j];
                                } else {
                                    soma += mat[i + 1][j] + mat[i][j - 1];
                                } 
                            }  
                        }
                        
                    } else if (i < lmt_y) {
                        if (m == 1) {
                            soma += mat[i - 1][j] + mat[i + 1][j];
                        } else {
                            if (j == 0) {
                                soma += mat[i - 1][j] + mat[i + 1][j] + mat[i][j + 1];
                            } else if (j < lmt_x) {
                                soma += mat[i][j - 1] + mat[i][j + 1] + mat[i - 1][j] + mat[i + 1][j];
                            } else {
                                soma += mat[i - 1][j] + mat[i + 1][j] + mat[i][j - 1];
                            }
                        } 
                    } else {
                        if (m == 1) {
                            soma += mat[i - 1][j];
                        } else {
                            if (j == 0) {
                                soma += mat[i - 1][j] + mat[i][j + 1];
                            } else if (j < lmt_x) {
                                soma += mat[i - 1][j] + mat[i][j - 1] + mat[i][j + 1];
                            } else {
                                soma += mat[i - 1][j] + mat[i][j - 1];
                            }
                        } 
                    }

                    printf("%d", soma);
                }
            }

            printf("\n");
        }
    }

    return 0;
}
