#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>






int main() {
   
    while (1) {
        char st[20];
        fgets(st, sizeof(st), stdin);
        int len = strlen(st);
        if (len > 0 && st[len - 1] == '\n') st[len - 1] = '\0';
        if (st == "START") {
            char s1[210];
            fgets(s1, sizeof(s1), stdin);
            for (int i = 0; i < strlen(s1); i ++) {
                if (s1[i] >= 'A' && s1[i] <= 'Z') {
                    s1[i] = (s1[i] - 'A' + 5) % 26 + 'A';
                }
            }
        }
        else if (st == "ENDOFINPUT") break;
        else if (st == "END") continue;
    }




    return 0;
}