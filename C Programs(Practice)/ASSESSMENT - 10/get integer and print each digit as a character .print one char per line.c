#include <stdio.h>

int main() {
    char num[20];
    int i = 0;

    scanf("%s", num);   

    while (num[i] != '\0') {
        printf("%c\n", num[i]);
        i++;
    }

    return 0;
}
