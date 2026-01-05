#include <stdio.h>

void memcopy(int *src, int *dst, int size) {
    int i;
    for (i = 0; i < size; i++) {
        *(dst + i) = *(src + i);   
    }
}

int main() {
    int src[50], dst[50];
    int n, i;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &src[i]);
    }

    memcopy(src, dst, n);

    for (i = 0; i < n; i++) {
        printf("%d ", *(dst + i));
    }

    return 0;
}
