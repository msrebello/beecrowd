/*
    @author: Matheus Rebello;
    @date: 11/03/2024;
    @name: Pedrinho's Christmas;

*/


#include <stdio.h>

#define MAX_DAYS 360

int main(int argc, char const *argv[])
{
    int days_in_month[] = {0, 31, 29, 31, 30 , 31, 30, 31, 31, 30, 31, 30, 31};
    int len = sizeof(days_in_month) / sizeof(days_in_month[0]);
    unsigned short month, day;

    while (scanf("%hu %hu", &month, &day) != EOF)
    {   

        int T_days = 0;

        for (unsigned short i = 1; i < month; i++)
             T_days += days_in_month[i];
        
        T_days += day;

        if (T_days > 360)
            printf("Ja passou!\n");
        else {
            if (T_days == 360)
                printf("E natal!\n");
            else if (T_days == 359)
                printf("E vespera de natal!\n");
            else
                printf("Faltam %d dias para o natal!\n", MAX_DAYS - T_days);
        }
    }
 
    return 0;
}
