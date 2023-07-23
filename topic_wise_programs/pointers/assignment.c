#include <stdio.h>

int main()
{
    int i = 1;
    int *p = &i;
    int *q;
    q = p; // p and q pointing to same memory address
    *q = 5; // the value at memory address gets changed for both p and  q

    printf("%d", *p);
    // output will be 5.
}

