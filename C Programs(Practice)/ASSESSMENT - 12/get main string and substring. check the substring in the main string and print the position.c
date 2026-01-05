#include <stdio.h>

int main() {
    char str[100], sub[50];
    char *p, *q, *start;
    int pos = 1, found = 0;

    scanf("%s", str);
    scanf("%s", sub);

    p = str;

    while (*p != '\0') {
        start = p;
        q = sub;

        while (*start == *q && *q != '\0') {
            start++;
            q++;
        }

        if (*q == '\0') {   
            printf("%d", pos);
            found = 1;
            break;
        }

        p++;
        pos++;
    }

    if (!found)
        printf("Not Found");

    return 0;
}
