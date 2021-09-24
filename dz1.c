#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {
    int a = 0;
    char n[32];
    scanf("%s", &n); //ввод
    for(int i=0; i < strlen(n); i++) { //пока i меньше размера строки прибавляем по одному
        if(n[i]=='1') {
            a=a+pow(2, (strlen(n)-i-1)); //если i равно одному ,то возводим двойку в степень разряда
        }
    }
    printf("%d\n", a); //вывод

    return 0;
}
