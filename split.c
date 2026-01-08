#include <stdio.h>

void splitEvenOdd(int arr[], int n, int even[], int* evenCount, int odd[], int* oddCount) {
    *evenCount = 0;
    *oddCount = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            even[*evenCount] = arr[i];
            (*evenCount)++;
        } else {
            odd[*oddCount] = arr[i];
            (*oddCount)++;
        }
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    int even[n], odd[n];
    int evenCount, oddCount;

    splitEvenOdd(arr, n, even, &evenCount, odd, &oddCount);

    printf("Original array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("Even numbers array: ");
    for (int i = 0; i < evenCount; i++) {
        printf("%d ", even[i]);
    }
    printf("\n");

    printf("Odd numbers array: ");
    for (int i = 0; i < oddCount; i++) {
        printf("%d ", odd[i]);
    }
    printf("\n");

    return 0;
}
