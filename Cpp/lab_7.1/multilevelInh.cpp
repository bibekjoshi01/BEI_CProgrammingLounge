// Multipath Inheritance

#include <iostream>
#include <string>

using namespace std;

class Student
{
private:
    string name;
    int rollNo;
    int marks;

public:
    Student() {}
    Student(string &name, int rollNo, int marks) : name(name), rollNo(rollNo), marks(marks)
    {
        cout << "Student Constructor Call";
    }

    ~Student()
    {
        cout << "Student Destructor Call";
    }
};

class BEI : public virtual Student
{
private:
    string instructor;

public:
    BEI() {}
    BEI(string &name, int rollNo, int marks, string &instructor) : Student(name, rollNo, marks), instructor(instructor) {}

    ~BEI()
    {
        cout << "BEI Destructor Call";
    }
};

class OOPLab : public BEI
{
private:
    int labs;

public:
    OOPLab(string &name, int rollNo, int marks, string &instructor, int subjects) : BEI(name, rollNo, marks, instructor), labs(labs) {}

    ~OOPLab()
    {
        cout << "OOPLab Destructor Call";
    }
};

int main()
{
    OOPLab obj("Bibek", 7, 45, "Manish", 10);
    return 0;
}
