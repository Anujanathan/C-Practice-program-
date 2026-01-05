#include <stdio.h>

void getnumbers(char *n1, char *n2) {
    scanf("%50s", n1);
    scanf("%50s", n2);
}

void addnumbers(char *n1, char *n2, char *res) {
    int i, j, k = 0;
    int carry = 0, sum;
    char temp[52];
    for (i = 0; n1[i] != '\0'; i++);
    for (j = 0; n2[j] != '\0'; j++);

    i--; j--;

    while (i >= 0 || j >= 0 || carry) {
        sum = carry;
        if (i >= 0) sum += n1[i--] - '0';
        if (j >= 0) sum += n2[j--] - '0';

        temp[k++] = (sum % 10) + '0';
        carry = sum / 10;
    }
    for (i = 0; i < k; i++) {
        res[i] = temp[k - i - 1];
    }
    res[k] = '\0';
}

void print(char *res) {
    printf("%s", res);
}

int main() {
    char number1[51], number2[51], result[52];

    getnumbers(number1, number2);
    addnumbers(number1, number2, result);
    print(result);

    return 0;
}
