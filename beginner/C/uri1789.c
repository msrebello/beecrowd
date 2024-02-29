#include <stdio.h>

#define LEVEL_1 10
#define LEVEL_2 20

int main(int argc, char const *argv[])
{
    int quantity_of_slugs;

    while (scanf("%d", &quantity_of_slugs) != EOF)
    {   
        int speed;
        int faster = 0;
       for (int i = 0; i < quantity_of_slugs; i++)
       {
        scanf("%d", &speed);

        if (speed > faster)
            faster = speed;
       }

        if(faster < LEVEL_1)
            printf("1\n");
        else if (faster < LEVEL_2)
            printf("2\n");
        else
            printf("3\n");

    }
    
    
    return 0;
}
