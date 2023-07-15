// WAP to enter cartesian coordinate points and display the distancd betweem them

#include <stdio.h>
#include <math.h>

struct Point
{
    int x;
    int y;
};

float calculateDistance(struct Point p1, struct Point p2)
{
    return sqrt(pow((p2.y - p1.y), 2) + pow((p2.x - p1.x), 2));
}

void getInput(struct Point *p, char *pointName)
{
    printf("Enter the coordinates of %s (x, y): ", pointName);
    scanf("%d %d", &(p->x), &(p->y));
}

void displayDistance(struct Point p1, struct Point p2, float distance)
{
    printf("The distance between (%d, %d) and (%d, %d) is %.2f\n", p1.x, p1.y, p2.x, p2.y, distance);
}

int main()
{
    struct Point point1, point2;

    getInput(&point1, "Point1");
    getInput(&point2, "Point2");

    float distance = calculateDistance(point1, point2);

    displayDistance(point1, point2, distance);

    return 0;
}
