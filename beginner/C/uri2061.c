/*
    @author: Matheus Rebello;
    @date: 08/03/2024;
    @name: Closing Tabs;

*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    
    unsigned short tabs, m;
    char action[7];

    scanf("%hd %hd", &tabs, &m);

    while (m--)
    {
        scanf(" %s", action);

        if (action[0] == 'f')
            tabs += 1;
        else
            tabs--;
    }

    printf("%hd\n", tabs);

    return 0;
}
