/*

    @author: Matheus Rebello;
    @date: 06/03/2024;
    @name: The Chosen;

*/

#include <stdio.h>

int main(int argc, char const *argv[])
{   
    unsigned short n;
    int reg_number;
    float note;

    scanf("%hu", &n);

    float highest_score = 0;
    int top_student = 0;
    short count = 0;
    

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &reg_number);
        scanf(" %f", &note);

        if (note > highest_score && note >= 8) {
            highest_score = note;
            top_student = reg_number;
            count++;
        }
    }

    if (count == 0)
        printf("Minimum note not reached\n");
    else
        printf("%d\n", top_student);
    

    return 0;
}
