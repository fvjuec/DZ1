#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(void) {
    int a = 0;
    char n[32];
    if(scanf("%s", &n) == 1) {
        for(int i = 0; i < strlen(n); i++) {
            if(n[i] == '1' || n[i] == '0') {
                if(n[i] == '1') {
                    a = a + pow(2, (strlen(n) - i - 1));
                }
            }
            else {
                printf("error");
                exit(0);
            }
        }
        printf("%d\n", a);
    }
    return 0;
}
