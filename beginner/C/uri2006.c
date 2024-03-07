/*

    @author: Matheus Rebello;
    @date: 07/03/2024;
    @name: Identifying Tea;

*/

#include <stdio.h>

#define WHITE_TEA 1
#define GREEN_TEA 2
#define BLACK_TEA 3
#define HERBAL_TEA 4

int main(int argc, char const *argv[])
{
    short tea_type, answer, wt = 0, gt = 0, bt = 0, ht = 0, answers = 4;

    scanf("%hi", &tea_type);
    
    do
    {
        scanf(" %hi", &answer);

        switch (answer)
        {
        case WHITE_TEA:
            wt++;
            break;
        case GREEN_TEA:
            gt++;
            break;
        case BLACK_TEA:
            bt++;
            break;
        case HERBAL_TEA:
            ht++;
            break;
        default:
            break;
        }
        
    } while (answers--);
    
    switch (tea_type)
    {
    case WHITE_TEA:
            printf("%d\n", wt);
            break;
        case GREEN_TEA:
            printf("%d\n", gt);
            break;
        case BLACK_TEA:
            printf("%d\n", bt);
            break;
        case HERBAL_TEA:
            printf("%d\n", ht);
            break;
        default:
            break;
    }

    return 0;
}
