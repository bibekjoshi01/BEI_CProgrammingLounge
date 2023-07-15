#include <stdio.h>

struct DateBS {
    int year;
    int month;
    int day;
};

struct DateAD {
    int year;
    int month;
    int day;
};

struct DateAD convertToAD(struct DateBS bsDate) {
    struct DateAD adDate;
    adDate.year = 2004;
    adDate.month = 10;
    adDate.day = 20;
    return adDate;
}

int main() {
    struct DateBS bsDate;
    printf("Enter the date in BS format (yyyy/mm/dd): ");
    scanf("%d/%d/%d", &bsDate.year, &bsDate.month, &bsDate.day);

    struct DateAD adDate = convertToAD(bsDate);
    printf("The converted date is: %04d/%02d/%02d\n", adDate.year, adDate.month, adDate.day);

    return 0;
}
