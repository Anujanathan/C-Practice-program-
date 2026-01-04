#include <stdio.h>

int main() {
    char num[51];
    int i = 0;

    scanf("%50s", num);   
    while (num[i] == '0') {
        i++;
    }

    if (num[i] == '\0') {
        printf("0");
    } else {
        while (num[i] != '\0') {
            printf("%c", num[i]);
            i++;
        }
    }

    return 0;
}
