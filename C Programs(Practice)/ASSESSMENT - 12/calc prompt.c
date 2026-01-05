#include <stdio.h>
#include <string.h>

#define MAX 55
void remove_leading_zeros(char *s) {
    int i = 0;
    while (s[i] == '0' && s[i + 1] != '\0') i++;
    if (i > 0) memmove(s, s + i, strlen(s) - i + 1);
}

int compare(char *a, char *b) {
    remove_leading_zeros(a);
    remove_leading_zeros(b);

    int la = strlen(a), lb = strlen(b);
    if (la > lb) return 1;
    if (la < lb) return -1;
    return strcmp(a, b);
}
void add(char *a, char *b, char *res) {
    int i = strlen(a) - 1, j = strlen(b) - 1;
    int k = 0, carry = 0, sum;
    char temp[110];

    while (i >= 0 || j >= 0 || carry) {
        sum = carry;
        if (i >= 0) sum += a[i--] - '0';
        if (j >= 0) sum += b[j--] - '0';
        temp[k++] = (sum % 10) + '0';
        carry = sum / 10;
    }

    for (i = 0; i < k; i++)
        res[i] = temp[k - i - 1];
    res[k] = '\0';
}

void subtract(char *a, char *b, char *res) {
    int i = strlen(a) - 1, j = strlen(b) - 1;
    int k = 0, diff, borrow = 0;
    char temp[110];

    while (i >= 0) {
        diff = (a[i] - '0') - borrow;
        if (j >= 0) diff -= (b[j] - '0');

        if (diff < 0) {
            diff += 10;
            borrow = 1;
        } else borrow = 0;

        temp[k++] = diff + '0';
        i--; j--;
    }

    while (k > 1 && temp[k - 1] == '0') k--;

    for (i = 0; i < k; i++)
        res[i] = temp[k - i - 1];
    res[k] = '\0';
}
void multiply(char *a, char *b, char *res) {
    int la = strlen(a), lb = strlen(b);
    int temp[110] = {0}, i, j;

    for (i = la - 1; i >= 0; i--)
        for (j = lb - 1; j >= 0; j--)
            temp[i + j + 1] += (a[i] - '0') * (b[j] - '0');

    for (i = la + lb - 1; i > 0; i--) {
        temp[i - 1] += temp[i] / 10;
        temp[i] %= 10;
    }

    i = 0; j = 0;
    while (i < la + lb && temp[i] == 0) i++;
    if (i == la + lb) res[j++] = '0';
    else while (i < la + lb) res[j++] = temp[i++] + '0';

    res[j] = '\0';
}

void divide(char *a, char *b, char *q, char *r) {
    char temp[MAX] = "", prod[MAX], one[] = "1";
    int i;

    strcpy(r, a);
    q[0] = '0'; q[1] = '\0';

    while (compare(r, b) >= 0) {
        subtract(r, b, r);
        add(q, one, q);
    }
}

int main() {
    char input[200], a[MAX], b[MAX], res[110], rem[110];
    char op;

    while (1) {
        printf("Calc> ");
        gets(input);

        if (strcmp(input, "Exit") == 0)
            break;

        sscanf(input, "%50[^+-*/]%c%50s", a, &op, b);
        remove_leading_zeros(a);
        remove_leading_zeros(b);

        if (op == '+') {
            add(a, b, res);
            printf("%s\n", res);
        }
        else if (op == '-') {
            if (compare(a, b) >= 0) {
                subtract(a, b, res);
                printf("%s\n", res);
            } else {
                subtract(b, a, res);
                printf("-%s\n", res);
            }
        }
        else if (op == '*') {
            multiply(a, b, res);
            printf("%s\n", res);
        }
        else if (op == '/') {
            if (strcmp(b, "0") == 0) {
                printf("Invalid Division\n");
            } else {
                divide(a, b, res, rem);
                printf("Quotient: %s Remainder: %s\n", res, rem);
            }
        }
        else {
            printf("Invalid Command\n");
        }
    }

    return 0;
}
