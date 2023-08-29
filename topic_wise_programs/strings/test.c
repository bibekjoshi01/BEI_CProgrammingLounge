#include <stdio.h>

int main()
{

    char name[100];

    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);
    // scanf("%[^\n]s", name);

    // printf("Your name is %s", name);
    puts(name);
    return 0;
}