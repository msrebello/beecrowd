/*
    @author: Matheus Rebello;
    @date: 16/03/2024;
    @name: The Force Awakens;

*/


#include <stdio.h>

int main(int argc, char const *argv[])
{  
    unsigned short M, N, x = 0, y = 0;

    scanf("%hu %hu", &M, &N);

    short int ground[M][N];

    for (unsigned short i = 0; i < M; i++)
        for (unsigned short j = 0; j < N; j++)
            scanf("%hd", &ground[i][j]);
            
    for (unsigned short i = 0; i < M; i++)
        for (unsigned short j = 0; j < N; j++)
        {

            if (ground[i][j] == 42)
                if (i == 0 || j == 0) continue;
                else
                    if (ground[i - 1][j - 1] == 7 && ground[i - 1][j] == 7 && 
                        ground[i - 1][j + 1] == 7 && ground[i][j - 1] == 7 && 
                        ground[i][j + 1] == 7 && ground[i + 1][j - 1] == 7 &&
                        ground[i + 1][j] == 7 && ground[i + 1][j + 1] == 7) {
                            x = i + 1;
                            y = j + 1;
                            break;
                        } 
        }
    
        printf("%hu %hu\n", x, y);
    
    return 0;
}