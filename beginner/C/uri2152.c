/*
    @author: Matheus Rebello;
    @date: 13/03/2024;
    @name: Pepe, I Already Took the Candle!;

*/

#include <stdio.h>

#define OPENED 1
#define CLOSED 0

int main(int argc, char const *argv[])
{  
    unsigned short hour, minute, door;
    unsigned short test;

    scanf("%hu", &test);

    while (test--) 
    {   
        scanf("%hu %hu %hu", &hour, &minute, &door);

        printf("%02hu:%02hu - ", hour, minute);

        printf(door == OPENED ? "A porta abriu!\n": "A porta fechou!\n");
    }
     
    return 0;
}
