// add two time objects using operator overloading

#include <iostream>

using namespace std;

class Time
{
private:
    int hour, min, sec;

public:
    Time() {}
    Time(int hour, int min, int sec) : hour(hour), min(min), sec(sec) {}

    void displayTime()
    {
        cout << hour << " Hour " << min << " Minutes " << sec << " Seconds " << endl;
    }

    Time operator+(const Time &t2) const;
};

// can't change the t2 and currect object t1 by using const
Time Time::operator+(const Time &t2) const 
{
    return Time(hour + t2.hour, min + t2.min, sec + t2.sec);
}

int main()
{
    Time t1(12, 45, 12);
    Time t2(9, 30, 56);
    t1.displayTime();
    t2.displayTime();

    Time t3 = t1 + t2;

    t3.displayTime();
    return 0;
}