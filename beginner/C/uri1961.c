#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int can_reach(int arr[], int len, int max_heigth);

int main(int argc, char const *argv[])
{
    int p, n;

    scanf("%d %d", &p, &n);

    int heights[n];
    int length_of_heights = sizeof(heights) / sizeof(heights[0]);


    for (int i = 0; i < length_of_heights; i++)
        scanf("%d", &heights[i]);

    if(can_reach(heights, length_of_heights, p))
        printf("YOU WIN\n");
    else
        printf("GAME OVER\n");
    

    return 0;
}


int can_reach(int arr[], int len, int max_heigth) {

    for (unsigned short i = 0; i < len - 1; i++)
    {

        if (abs(arr[i] - arr[i + 1]) > max_heigth)
            return 0;
        else
            continue;          
    }

    return 1; 
}