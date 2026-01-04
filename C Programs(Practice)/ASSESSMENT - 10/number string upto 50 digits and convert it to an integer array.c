#include <stdio.h>

int main() {
    char num[51];
    int arr[50];
    int i = 0;

    scanf("%50s", num);  

    while (num[i] != '\0') {
        arr[i] = num[i] - '0';   
        i++;
    }

    for (int j = 0; j < i; j++) {
        printf("%d ", arr[j]);
    }

    return 0;
}
