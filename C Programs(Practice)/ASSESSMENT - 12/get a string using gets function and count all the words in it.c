#include <stdio.h>

int main() {
    char str[200];
    char *ptr;
    int count = 0;

    gets(str);     

    ptr = str;
    while (*ptr != '\0') {
        if (*ptr != ' ' && (ptr == str || *(ptr - 1) == ' ')) {
            count++;
        }
        ptr++;
    }

    printf("%d", count);

    return 0;
}
