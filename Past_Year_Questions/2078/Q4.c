// 4. Write a output of the followin program.

#include <stdio.h>
#include <math.h>

int main()
{
    char ch = 'G';
    int g = 10;
    float gravity = 9.81;
    printf("%%d%%f\n");
    printf("%10d\n", g);
    printf("%3c\n", ch);
    printf("%.3f\n", gravity);
    printf("%-10.1f%d\n", gravity, g);
}