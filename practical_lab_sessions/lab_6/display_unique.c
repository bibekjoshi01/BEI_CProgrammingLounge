#include <stdio.h>

#define MAX_SIZE 100

int main() {
    int inputArray[MAX_SIZE];
    int uniqueArray[MAX_SIZE];
    int size, uniqueCount = 0;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    printf("Enter elements in the array: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &inputArray[i]);
    }

    // Check for unique elements
    for (int i = 0; i < size; i++) {
        int isUnique = 1;
        for (int j = 0; j < uniqueCount; j++) {
            if (inputArray[i] == uniqueArray[j]) {
                isUnique = 0;
                break;
            }
        }
        if (isUnique) {
            uniqueArray[uniqueCount] = inputArray[i];
            uniqueCount++;
        }
    }

    printf("Unique elements in the array: ");
    for (int i = 0; i < uniqueCount; i++) {
        printf("%d ", uniqueArray[i]);
    }
    printf("\n");

    return 0;
}
