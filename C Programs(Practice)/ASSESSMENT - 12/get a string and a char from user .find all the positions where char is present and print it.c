#include <stdio.h>

int main() {
    char str[100];
    char ch;
    char *ptr;
    int pos = 1, found = 0;

    scanf("%s", str);
    scanf(" %c", &ch);

    ptr = str;   
    while (*ptr != '\0') {
        if (*ptr == ch) {
            if (found)
                printf(",");
            printf("%d", pos);
            found = 1;
        }
        ptr++;
        pos++;
    }

    return 0;
}
