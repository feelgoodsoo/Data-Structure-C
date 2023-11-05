#include <stdio.h>
#include "listS.h"

int main(void) {
    int list[MAX] = { 10, 20, 40, 50, 60, 70 };
    int i, move, size = 6;  // The size represents the number of elements in the list
    printf("\nLinear list before insertion: ");
    for (i = 0; i < size; i++) printf("%3d ", list[i]);
    printf("\nNumber of elements: %d \n", size);

    move = insertElement(list, size, 30);

    printf("\nLinear list after insertion: ");
    for (i = 0; i <= size; i++) printf("%3d ", list[i]);
    printf("\nNumber of elements: %d ", ++size);
    printf("\nNumber of position shifts: %d \n", move);

    move = deleteElement(list, size, 30);
    if (move == size) printf("\nThe linear list has no elements to delete.\n");
    else {
        printf("\nLinear list after deletion: ");
        for (i = 0; i < size - 1; i++) printf("%3d ", list[i]);
        printf("\nNumber of elements: %d ", --size);
        printf("\nNumber of position shifts: %d \n", move);
    }

    getchar(); return 0;
}
