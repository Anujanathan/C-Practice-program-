#include <stdio.h>

void arrange_ascend(int *ptr) {
    int i;
    for (i = 0; i < 5; i++) {
        printf("%d\n", *(ptr + i));
    }
}

int main() {
    int arr[5] = {1, 2, 3, 4, 5};

    arrange_ascend(arr);   

    return 0;
}
