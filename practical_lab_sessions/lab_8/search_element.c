// 5. Write a program to search an element in array using pointers. 

#include <stdio.h>

int searchElement(int *arr, int size, int target) {
    for (int i = 0; i < size; i++) {
        if (*arr == target) {
            return i; // Return the index if the element is found
        }
        arr++; // Move the pointer to the next element
    }

    return -1; // Return -1 if the element is not found
}

int main() {
    int array[] = {10, 20, 30, 40, 50};
    int size = sizeof(array) / sizeof(array[0]);
    int target;

    printf("Enter the element to search: ");
    scanf("%d", &target);

    int index = searchElement(array, size, target);

    if (index != -1) {
        printf("Element %d found at index %d.\n", target, index);
    } else {
        printf("Element %d not found in the array.\n", target);
    }

    return 0;
}
