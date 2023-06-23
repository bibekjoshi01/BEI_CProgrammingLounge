// WAP to search an element in array

#include <stdio.h>

int searchArray(int elements[], int length, int element){
    int i;

    // Finding the number in array
    for (i=1; i<length; i++){
        if (elements[i] == element){
            printf("Element %d found at index %d", element, i);
            return 0;
        }
    }
    printf("Opps ! Element %d not found in array !", element);
}


int main(){
    int length, i, element;
    int elements[100];

    // getting length of the array
    printf("Enter the length of the array: ");
    scanf("%d", &length);

    // getting array elements
    printf("Enter the elements of array: \n");
    for (i=0; i<length; i++){
        scanf("%d", &elements[i]);
    }

    printf("Enter the element to search: ");
    scanf("%d", &element);

    searchArray(elements, length, element);

}
