// Overload + two add two time objects

#include <iostream>

using namespace std;

class Time
{
private:
    int hour, min, sec;

public:
    Time() {}
    Time(const int hour, const int min, const int sec) : hour(hour), min(min), sec(sec) {}

    void displayTime()
    {
        cout << hour << " Hours " << min << " Minutes " << sec << " Seconds " << endl;
    }

    Time operator+(const Time &other) const
    {
        Time result;
        result.sec = sec + other.sec;
        result.min = min + other.min + result.sec / 60;
        result.hour = hour + other.hour + result.min / 60;
        result.sec %= 60;
        result.min %= 60;
        return result;
    }
};

int main()
{
    Time t1(1, 30, 45);
    Time t2(2, 15, 10);

    Time sum = t1 + t2;

    cout << "Time 1: ";
    t1.displayTime();
    cout << "Time 2: ";
    t2.displayTime();
    cout << "Sum: ";
    sum.displayTime();

    return 0;
}