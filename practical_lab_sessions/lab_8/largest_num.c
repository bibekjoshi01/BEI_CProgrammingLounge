// 2. Write a program to find biggest among three numbers using pointer.

#include <stdio.h>

void findMax(int *num1, int *num2, int *num3, int *largest){
    *largest = *num1;

    if (*num2 > *largest){
        *largest = *num2;
    }

    if (*num3 > *largest){
        *largest = *num3;
    }
}

int main() {
    int num1, num2, num3;
    int largest;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    findMax(&num1, &num2, &num3, &largest);

    printf("The biggest number among %d, %d, and %d is: %d\n", num1, num2, num3, largest);

    return 0;
}