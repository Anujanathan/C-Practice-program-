#include <stdio.h>

int strcomp(char *src, char *dst) {
    while (*src != '\0' && *dst != '\0') {
        if (*src != *dst) {
            return 0;   // failure
        }
        src++;
        dst++;
    }
    if (*src == '\0' && *dst == '\0')
        return 1;  
    else
        return 0;   
}

int main() {
    char src[100], dst[100];

    scanf("%s", src);
    scanf("%s", dst);

    if (strcomp(src, dst))
        printf("Success");
    else
        printf("Failure");

    return 0;
}
