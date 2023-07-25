// 4. Write a program to find the sum of following series upto n terms.
// Series: 1 - x^2/2! + x^4/4! - x^6/6! + ....... + n terms

#include <stdio.h>
#include <math.h>


double findFactorial(int n) {
    if (n == 0 || n == 1)
        return 1.0;
    else
        return n * findFactorial(n - 1);
}

int main() {
    int x, n;
    double sum = 0.0;

    printf("Enter the value of variable x: ");
    scanf("%d", &x);

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            sum -= pow(x, 2 * i) / findFactorial(i * 2);
        } else {
            sum += pow(x, 2 * i) / findFactorial(i * 2);
        }
    }

    printf("The sum of series up to %d terms is: %.2f\n", n, sum);

    return 0;
}
