#include <stdio.h>

int main() {
    int n = 11, a, b;

start:
    if (n % 2 == 0) {
        a = n / 10;      
        b = n % 10;      

        if (a + b == 6)
            printf("%d\n", n);
    }

    n++;

    if (n < 100)
        goto start;

    return 0;
}
