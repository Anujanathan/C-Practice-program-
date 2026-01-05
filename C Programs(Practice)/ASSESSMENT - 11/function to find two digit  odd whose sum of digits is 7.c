#include <stdio.h>

void find_2digit_odd_sum7(int *arr, int *count) {
    int num, sum;

    for (num = 11; num <= 99; num += 2) {   
        sum = (num / 10) + (num % 10);
        if (sum == 7) {
            arr[*count] = num;   
            (*count)++;
        }
    }
}

int main() {
    int result[10];
    int count = 0, i;

    find_2digit_odd_sum7(result, &count);

    for (i = 0; i < count; i++) {
        printf("%d", *(result + i));
        if (i < count - 1)
            printf(", ");
    }

    return 0;
}
