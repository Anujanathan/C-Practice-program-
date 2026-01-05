#include <stdio.h>

int memcomp(int *src, int *dst, int size) {
    int i;
    for (i = 0; i < size; i++) {
        if (*(src + i) != *(dst + i)) {
            return 0;   
        }
    }
    return 1;   
}

int main() {
    int src[50], dst[50];
    int n, i;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &src[i]);
    }

    for (i = 0; i < n; i++) {
        scanf("%d", &dst[i]);
    }

    if (memcomp(src, dst, n))
        printf("Success");
    else
        printf("Failure");

    return 0;
}
