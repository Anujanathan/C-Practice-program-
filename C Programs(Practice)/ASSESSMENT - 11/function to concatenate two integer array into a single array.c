#include <stdio.h>

void intcon(int *src1, int size1, int *src2, int size2, int *dst) {
    int i;

    for (i = 0; i < size1; i++) {
        *(dst + i) = *(src1 + i);
    }
    for (i = 0; i < size2; i++) {
        *(dst + size1 + i) = *(src2 + i);
    }
}

int main() {
    int src1[50], src2[50], dst[100];
    int n1, n2, i;

    scanf("%d", &n1);
    for (i = 0; i < n1; i++) {
        scanf("%d", &src1[i]);
    }

    scanf("%d", &n2);
    for (i = 0; i < n2; i++) {
        scanf("%d", &src2[i]);
    }

    intcon(src1, n1, src2, n2, dst);

    for (i = 0; i < n1 + n2; i++) {
        printf("%d ", *(dst + i));
    }

    return 0;
}
