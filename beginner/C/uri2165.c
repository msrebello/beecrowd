/*
    @author: Matheus Rebello;
    @date: 19/03/2024;
    @name: Twitting;

*/

#include <stdio.h>

int my_strlen(char arr[]);
int tweet(int length);


int main(int argc, char const *argv[])
{
    char text[500];
    scanf("%[^\n]%*c", text);

    if (!tweet(my_strlen(text)))
        printf("MUTE\n");
    else
        printf("TWEET\n");

    return 0;
}

int my_strlen(char arr[])
{   
    int length;
    for (unsigned short i = 0; arr[i] != '\0'; i++)
       length++;
    
    return length;
}

int tweet(int length)
{
    return length > 140 ? 0 : 1;
}


