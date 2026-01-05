#include <stdio.h>

void strcon(char *src1, char *src2, char *dst) {

    while (*src1 != '\0') {
        *dst = *src1;
        src1++;
        dst++;
    }

    while (*src2 != '\0') {
        *dst = *src2;
        src2++;
        dst++;
    }

    *dst = '\0';   
}

int main() {
    char src1[50], src2[50], dst[100];

    scanf("%s", src1);
    scanf("%s", src2);

    strcon(src1, src2, dst);

    printf("%s", dst);

    return 0;
}
