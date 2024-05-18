#include <iostream>

using namespace std;

class Time
{
private:
    int hr, min, sec;

public:
    Time() : hr(12), min(0), sec(0) {} // Default Constructor

    // Parameterized Constructor
    Time(int sec)
    {

        if (sec > 60)
        {
            this->min = sec / 60;
            this->sec = sec % 60;
        }

        if (this->min > 60)
        {
            this->hr = min / 60;
            this->min = min % 60;
        }
    }

    // Copy Constructor
    Time(Time &t)
    {
        hr = t.hr;
        min = t.min;
        sec = t.sec;
    }

    // display function
    void getTime()
    {
        cout << "Hour::Min::Sec " << this->hr << "::" << this->min << "::" << this->sec << endl;
    }
};

int main()
{
    // defining operator with default constructor
    Time t;
    t.getTime();

    // defining operator with parameterized constructor
    Time t2(5000);
    t2.getTime();

    // copying using copy constructor
    // Time t3(t2); alternative
    Time t3 = t2;

    t3.getTime();

    return 0;
}