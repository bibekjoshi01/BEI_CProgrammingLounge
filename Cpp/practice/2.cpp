// static data memebers and static functions

#include <iostream>

using namespace std;

class Student
{
private:
    static int total_students;
    int roll_no;
    string name;

public:
    Student(int roll_no, string name) : roll_no(roll_no), name(name)
    {
        total_students++;
    }

    static int getTotalStudentsCount()
    {
        return total_students;
    }
};

// initialize static data memeber
int Student::total_students = 0;

int main()
{
    Student s1(1, "Bibek");
    Student s2(2, "Sudip");
    Student s3(3, "Deepak");
    Student s4(4, "Bikram");

    cout << "Total Students: " << Student::getTotalStudentsCount() << endl;
    return 0;
}