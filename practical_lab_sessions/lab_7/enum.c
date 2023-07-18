// Write a program to show programming example with enumeration in c (enum).

#include <stdio.h>

enum Weekday {
    Sunday,
    Monday,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday
};

int main() {
    enum Weekday today;

    today = Friday;

    if (today == Sunday || today == Saturday) {
        printf("It's the weekend!\n");
    } else {
        printf("It's a weekday.\n");
    }

    printf("Today is day number %d\n", today + 1);

    return 0;
}
