// Write a program in C to find all possible roots of a quadratic equation ax^2+bx+c=0

#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, c;
    float root1, root2;

    printf("Enter the values of a, b, c (ax^2 + bx + c = 0): ");
    scanf("%d, %d, %d", &a, &b, &c);

    if (a == 0)
    {
        printf("This is not a quadratic equation (a = 0).\n");
    }

    int discriminant = pow(b, 2) - 4 * a * c;

    // checking the discriminant and finding roots
    if (discriminant > 0)
    {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Two distinct real roots exist: %.2f and %.2f\n", root1, root2);
    }
    else if (discriminant == 0)
    {
        root1 = -b / (2 * a);
        printf("Two equal roots exist: %.2f\n", root1);
    }
    else
    {
        printf("No real roots exist!\n");
    }

    return 0;
}