/*
    @author: Matheus Rebello;
    @date: 10/04/2024;
    @name: System of a Download;

*/

#include <stdio.h>

int main(int argc, char const *argv[]) {
    char musicas[11][15] = {"PROXYCITY", "P.Y.N.G.", 
        "DNSUEY!", "SERVERS", "HOST!", "CRIPTONIZE", 
        "OFFLINE DAY", "SALT", "ANSWER!", "RAR?", "WIFI ANTENNAS"};

    int n;
    int x, y;
    
    scanf("%d", &n);
    
    while (n--) {
        scanf("%d %d", &x, &y);

        int s = x + y;

        printf("%s\n", musicas[s]);
    }

    return 0;
}
