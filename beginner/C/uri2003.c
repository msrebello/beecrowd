/*

    @author: Matheus Rebello;
    @date: 07/03/2024;
    @name: Sunday Morning;

*/

#include <stdio.h>

int delay(int minutes);

int main(int argc, char const *argv[])
{
    int hours, minutes, total_minutes = 0;

    while (scanf("%d:%d", &hours, &minutes) != EOF)
    {
        total_minutes = minutes + hours * 60;
        printf("Atraso maximo: %d\n", delay(total_minutes));
    }
    
    return 0;
}

int delay(int minutes) {
    int max_duration = minutes + 60;
    return max_duration > 480 ? max_duration - 480 : 0;
}
