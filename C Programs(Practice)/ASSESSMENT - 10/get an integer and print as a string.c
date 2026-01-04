#include <stdio.h>

int main() {
    int n, i = 0;
    char str[20];

    scanf("%d", &n);

    if (n == 0) {
        str[i++] = '0';
    } else {
        int temp = n;
        char rev[20];
        int j = 0;

        while (temp > 0) {
            rev[j++] = (temp % 10) + '0';
            temp /= 10;
        }

        while (j > 0) {
            str[i++] = rev[--j];
        }
    }

    str[i] = '\0';
    printf("%s", str);

    return 0;
}
