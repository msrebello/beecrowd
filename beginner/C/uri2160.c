/*
    @author: Matheus Rebello;
    @date: 13/03/2024;
    @name: Name at Form;

*/

#include <stdio.h>

int my_strlen(char arr[]);

int main(int argc, char const *argv[])
{  
    char sentence[500];

    scanf("%[^\n]%*c", sentence);

    printf(my_strlen(sentence) > 80 ? "NO\n" : "YES\n");
     
    return 0;
}

int my_strlen(char arr[]) {

    int len = 0;

    for (int i = 0; arr[i] != '\0'; i++) 
        len++;
    
    return len;   
}
