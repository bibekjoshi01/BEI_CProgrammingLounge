// WAP in c using structure and passing the structure to a function that returns the result after 
// converting the date in format yyyy/mm/dd in BS to AD

#include <stdio.h>

typedef struct {
    int year;
    int month;
    int day;
} Date;

Date convertToAD(Date bsDate) {
    Date adDate;

    // AD year is 56 years ahead of the BS year
    adDate.year = bsDate.year - 56;

    // AD month is the same as the BS month
    adDate.month = bsDate.month;

    // AD day is the same as the BS day
    adDate.day = bsDate.day;

    return adDate;
}

int main() {
    Date bsDate, adDate;

    // Prompt the user to enter a date in the BS format
    printf("Enter a date in the BS format (yyyy/mm/dd): ");
    scanf("%d/%d/%d", &bsDate.year, &bsDate.month, &bsDate.day);

    // Convert the BS date to the AD format
    adDate = convertToAD(bsDate);

    // Display the converted AD date
    printf("The date in the AD format is: %04d/%02d/%02d\n", adDate.year, adDate.month, adDate.day);

    return 0;
}

