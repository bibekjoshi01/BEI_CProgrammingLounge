// 1. WAP to count the total number of duplicate elements in an array 

#include <stdio.h>

#define MAX_SIZE 100

int countDuplicatesFrequency(int arr[], int size) {
    int frequency[MAX_SIZE] = {0};
    int count = 0;

    // Count the frequency of each element in the array
    for (int i = 0; i < size; i++) {
        frequency[arr[i]]++;
    }

    // Count the number of duplicate elements
    for (int i = 0; i < MAX_SIZE; i++) {
        if (frequency[i] > 1) {
            count++;
            printf("%d occurs %d times\n", i, frequency[i]);
        }
    }

    if (count == 0) {
        printf("No duplicates found in the array.\n");
    }

    return count;
}

int main() {
    int size, arr[MAX_SIZE];

    printf("\nEnter the size of the array (up to %d): ", MAX_SIZE);
    scanf("%d", &size);

    printf("Enter elements in the array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
        
    printf("Duplicate elements in the array:\n");
    int duplicateCount = countDuplicatesFrequency(arr, size);
    printf("The total number of duplicates = %d\n", duplicateCount);

    printf("\n");
    return 0;
}
