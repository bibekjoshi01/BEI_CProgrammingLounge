// 7. Create a structure TIME containing hour, minutes, seconds as its members.
/* Write a program that uses this structure to input start and stop time. Pass the
Structures to a function by reference that calculates the sum and differene of start and stop time.
Display the sum and difference from calling function.
*/

#include <stdio.h>

struct TIME
{
    int hour;
    int minutes;
    int seconds;
};

void getInput(struct TIME *time, char *timeLabel)
{
    int validInput = 0;
    do
    {
        printf("Enter the %s time. (hours, minutes, seconds): ", timeLabel);
        if (scanf("%d,%d,%d", &(time->hour), &(time->minutes), &(time->seconds)) == 3)
        {
            // Input has been successfully read with three valid integers.
            if (time->hour >= 0 && time->hour <= 23 &&
                time->minutes >= 0 && time->minutes <= 59 &&
                time->seconds >= 0 && time->seconds <= 59)
            {
                validInput = 1;
            }
            else
            {
                printf("Invalid input! Please enter valid values for hours (0-23), minutes (0-59), and seconds (0-59).\n");
            }
        }
        else
        {
            // Invalid input, clear the input buffer to prevent further issues.
            while (getchar() != '\n')
            {
                printf("Invalid input! Please enter valid integer values for hours, minutes, and seconds.\n");
            }
        }
    } while (!validInput);
}

void calculateDifference(struct TIME *startTime, struct TIME *stopTime, struct TIME *difference)
{
    int totalStartTimeInSeconds = startTime->hour * 3600 + startTime->minutes * 60 + startTime->seconds;
    int totalStopTimeInSeconds = stopTime->hour * 3600 + stopTime->minutes * 60 + stopTime->seconds;
    int differenceInSeconds = totalStopTimeInSeconds - totalStartTimeInSeconds;

    // Handle negative differences by adding 24 hours (86400 seconds) to the total difference.
    if (differenceInSeconds < 0)
    {
        differenceInSeconds += 86400; // 24 hours in seconds
    }

    difference->hour = differenceInSeconds / 3600;
    difference->minutes = (differenceInSeconds % 3600) / 60;
    difference->seconds = (differenceInSeconds % 3600) % 60;
}

int main()
{
    struct TIME startTime, stopTime, difference;

    getInput(&startTime, "Start");
    getInput(&stopTime, "Stop");

    calculateDifference(&startTime, &stopTime, &difference);

    printf("The difference between start time(%d hours %d minutes %d seconds) and stop time(%d hours %d minutes %d seconds) is (%d hours %d minutes %d seconds)",
           startTime.hour, startTime.minutes, startTime.seconds,
           stopTime.hour, stopTime.minutes, stopTime.seconds,
           difference.hour, difference.minutes, difference.seconds);
}