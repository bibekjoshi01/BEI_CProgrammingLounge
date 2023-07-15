// WAP to perform addition of all elements in Array and display average value

#include <stdio.h>

// function to calculate the sum of elements in array 

int sumOfArray(int arr[], int length){
    int sum = 0;

    for (int i=0; i<length; i++){
        sum += arr[i];
    }

    return sum;
}


int main(){
    int arr[100], length, i;

    // getting length of the array
    printf("Enter the length of the array: ");
    scanf("%d", &length);

    // getting array elements
    printf("Enter the elements of array: \n");
    for (i=0; i<length; i++){
        scanf("%d", &arr[i]);
    }

    int sum = sumOfArray(arr, length);
    float avg = sum/length;

    printf("The Sum of all numbers in array is %.2f", avg);
}