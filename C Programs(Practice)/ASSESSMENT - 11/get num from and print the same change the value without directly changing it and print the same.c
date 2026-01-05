#include <stdio.h>

int main() {
    int num;
    int *ptr;

    scanf("%d", &num);
    ptr = &num;
    printf("%d\n", *ptr);
    *ptr = *ptr + 10;
    printf("%d", *ptr);

    return 0;
}
