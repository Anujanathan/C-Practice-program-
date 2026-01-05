#include <stdio.h>

void getnumbers(char *n1, char *n2) {
    scanf("%50s", n1);
    scanf("%50s", n2);
}

void multiplynumbers(char *n1, char *n2, char *res) {
    int i, j, len1 = 0, len2 = 0;
    int temp[110] = {0};
    while (n1[len1] != '\0') len1++;
    while (n2[len2] != '\0') len2++;
    for (i = len1 - 1; i >= 0; i--) {
        for (j = len2 - 1; j >= 0; j--) {
            temp[i + j + 1] += (n1[i] - '0') * (n2[j] - '0');
        }
    }
    for (i = len1 + len2 - 1; i > 0; i--) {
        temp[i - 1] += temp[i] / 10;
        temp[i] %= 10;
    }
    i = 0;
    j = 0;
    while (i < len1 + len2 && temp[i] == 0)
        i++;

    if (i == len1 + len2) {
        res[j++] = '0';
    } else {
        while (i < len1 + len2) {
            res[j++] = temp[i++] + '0';
        }
    }

    res[j] = '\0';
}

void print(char *res) {
    printf("%s", res);
}

int main() {
    char number1[51], number2[51], result[110];

    getnumbers(number1, number2);
    multiplynumbers(number1, number2, result);
    print(result);

    return 0;
}
