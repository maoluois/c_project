#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
const int N = 2e5 + 10;
int a[10000 + 10];
int b[10][10];

int main() {
   
    while (1) {
        // printf("1");
        char st[20];
        fgets(st, sizeof(st), stdin);
        int len = strlen(st);
        if (len > 0 && st[len - 1] == '\n') st[len - 1] = '\0';
        // printf("%s", st);
        if (strcmp("START", st) == 0) {
            
            char s1[210];
            fgets(s1, sizeof(s1), stdin);
            for (int i = 0; i < strlen(s1); i ++) {
                if (s1[i] >= 'A' && s1[i] <= 'Z') {
                    s1[i] = (s1[i] - 'A' - 5 + 26) % 26 + 'A';
                    printf("%c", s1[i]);
                }
                else printf("%c", s1[i]);
            }
        }
        else if (strcmp("ENDOFINPUT", st) == 0) break;
        else if (strcmp("END", st) == 0) continue;
    }


    return 0;
}