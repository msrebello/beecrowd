/*
    @author: Matheus Rebello;
    @date: 16/03/2024;
    @name: Peaks and Valleys;

*/

#include <stdio.h>

int has_pattern(short int sequence[], unsigned short length);

int main(int argc, char const *argv[])
{  
    unsigned short num_elements;

    scanf("%hu", &num_elements);

    short int sequence[num_elements];

    unsigned short sequence_length = sizeof(sequence) / sizeof(sequence[0]);


    for (unsigned short i = 0; i < sequence_length; i++)
    {
        scanf(" %hd", &sequence[i]);
    }

    printf("%d\n", has_pattern(sequence, sequence_length));
    
    return 0;
}

int has_pattern(short int sequence[], unsigned short length)
{
    if (length == 2)
        return sequence[0] != sequence[1];
    
    for (unsigned short i = 1; i < length - 1; i++) {
        if ((sequence[i] <= sequence[i - 1] && sequence[i] >= sequence[i + 1]) ||
            (sequence[i] >= sequence[i - 1] && sequence[i] <= sequence[i + 1])) {
            return 0;
        }
    }

    return 1;

}
