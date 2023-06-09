/* 8. WAP to solve the riddle 'TOWER OF HONOI' and also display the steps involved */

#include <stdio.h>

void towerOfHanoi(int n, char source, char auxiliary, char destination);
void moveDisk(char source, char destination);

int main()
{
    int n;

    printf("Enter the number of disks: ");
    scanf("%d", &n);

    printf("Steps to solve Tower of Hanoi with %d disks:\n", n);
    towerOfHanoi(n, 'A', 'B', 'C');

    return 0;
}

void towerOfHanoi(int n, char source, char auxiliary, char destination)
{
    if (n == 1)
    {
        moveDisk(source, destination);
    }
    else
    {
        towerOfHanoi(n - 1, source, destination, auxiliary);
        moveDisk(source, destination);
        towerOfHanoi(n - 1, auxiliary, source, destination);
    }
}

void moveDisk(char source, char destination)
{
    printf("Move disk from %c to %c\n", source, destination);
}
