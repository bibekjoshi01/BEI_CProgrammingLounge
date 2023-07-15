#include <stdio.h>

struct nums {
    int a;
    int b;
};

void swap (struct nums *n1){
    int temp = (n1->a);
    (n1->a) = (n1->b);
    (n1->b) = temp;
}

int main(){
    struct nums n1;

    n1.a = 5;
    n1.b = 6;

    swap(&n1);
    printf("After swapping the values are %d and %d", n1.a, n1.b);
}