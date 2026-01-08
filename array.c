#include <stdio.h>

int main() {
    int array[10] = {2, 4, 0, 1, 9, 5, 8, 3, 6, 7};
    int search_key;
    int found = 0;
    int i;

    printf("Array elements: ");
    for (i = 0; i < 10; i++) {
    printf("%d ", array[i]);
    }
    printf("\\n");

    printf("Enter the number to search: ");
    scanf("%d", &search_key);

    for (i = 0; i < 10; i++) {
    if (array[i] == search_key) {
    found = 1;
    break;
    }
    }

    if (found == 1) {
    printf("Element %d is present at index %d (position %d).\\n", search_key, i, i + 1);
    } else {
    printf("Element %d is not present in the array.\\n", search_key);
    }

    return 0;
}
