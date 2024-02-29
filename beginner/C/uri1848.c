#include <stdio.h>

int main(int argc, char const *argv[])
{
    char sentence[10];
    int sum = 0, count = 0;

    do
    {
        scanf("%[^\n]%*c", sentence);

        if (sentence[0] == '-' || sentence[0] == '*') // it's a blink
            if (sentence[0] == '-')
            {
                if (sentence[1] == '-' && sentence[2] == '-')
                    sum += 0;
                else if (sentence[1] == '-' && sentence[2] == '*')
                    sum += 1;
                else if (sentence[1] == '*' && sentence[2] == '-')
                    sum += 2;
                else if (sentence[1] == '*' && sentence[2] == '*')
                    sum += 3;
            }
            else
            {
                if (sentence[1] == '*' && sentence[2] == '*')
                    sum += 7;
                else if (sentence[1] == '-' && sentence[2] == '-')
                    sum += 4;
                else if (sentence[1] == '-' && sentence[2] == '*')
                    sum += 5;
                else if (sentence[1] == '*' && sentence[2] == '-')
                    sum += 6;      
            }
        else {// it's a scream
            printf("%d\n", sum);
            sum = 0;
            count++;
        }

    } while (count < 3);

    return 0;
}
