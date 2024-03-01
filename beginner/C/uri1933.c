#include <stdio.h>

int main(int argc, char const *argv[])
{
    unsigned short card_1, card_2, card_3 = 0;

    scanf("%hu %hu", &card_1, &card_2);

    if (card_1 == card_2)
    {
        card_3 = card_1;
        printf("%hu\n", card_3);
    }

    else
    {
        if (card_1 > card_2)
            printf("%hu\n", card_1);
        else
            printf("%hu\n", card_2);
    }

    return 0;
}
