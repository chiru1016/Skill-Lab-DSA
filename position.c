#include <stdio.h>

int main() {
    int array[20] = {1, 2, 3, 4, 5};
    int element_to_insert = 99;
    int position = 3;
    int current_size = 5;

    if (position < 0 || position > current_size) {
     printf("Invalid position for insertion.\n");
    } else {
     for (int i = current_size - 1; i >= position; i--) {
     array[i + 1] = array[i];
    }

    array[position] = element_to_insert;
    current_size++;

    printf("Array after insertion:\n");
    for (int i = 0; i < current_size; i++) {
    printf("%d ", array[i]);
   }
    printf("\n");
   }

    return 0;
}
