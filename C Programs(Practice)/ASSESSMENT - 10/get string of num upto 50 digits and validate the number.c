#include <stdio.h>

int main() {
    char num[51];   
    int i = 0, count = 0, valid = 1;

    scanf("%50s", num);   
    while (num[i] != '\0') {
        if (num[i] < '0' || num[i] > '9') {
            valid = 0;
            break;
        }
        count++;
        i++;
    }

    if (count > 50)
        valid = 0;

    if (valid)
        printf("Valid Number");
    else
        printf("Invalid Number");

    return 0;
}
