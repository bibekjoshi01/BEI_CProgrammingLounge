// define a structure "complex" (typedef) to read two complex numbers and 
// perform addition subtraction of these two complex numbers and display the result, 

#include <stdio.h>

typedef struct {
    float real;
    float imaginary;
} complex;

int main() {
    complex num1, num2, sum, difference;
    
    // Read the first complex number
    printf("Enter the real and imaginary parts of the first complex number:\n");
    scanf("%f%f", &num1.real, &num1.imaginary);
    
    // Read the second complex number
    printf("Enter the real and imaginary parts of the second complex number:\n");
    scanf("%f%f", &num2.real, &num2.imaginary);
    
    // Perform addition
    sum.real = num1.real + num2.real;
    sum.imaginary = num1.imaginary + num2.imaginary;
    
    // Perform subtraction
    difference.real = num1.real - num2.real;
    difference.imaginary = num1.imaginary - num2.imaginary;
    
    // Display the result
    printf("Sum: %.2f + %.2fi\n", sum.real, sum.imaginary);
    printf("Difference: %.2f + %.2fi\n", difference.real, difference.imaginary);
    
    return 0;
}
