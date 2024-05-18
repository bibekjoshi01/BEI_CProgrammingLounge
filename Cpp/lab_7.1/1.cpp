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
    Student()
    {
        cout << "666";
    }
    Student(string &name, int rollNo, int marks) : name(name), rollNo(rollNo), marks(marks) {}

    void display()
    {
        cout << name << rollNo << marks << endl;
    }
};

class BEI : public virtual Student
{
private:
    string instructor;

public:
    BEI() {}
    BEI(string &instructor) : instructor(instructor) {}

    void display()
    {
        cout << "Instructor" << instructor << endl;
    }
};

class BCT : virtual public Student
{
private:
    int subjects;

public:
    BCT() {}
    BCT(int subjects) : subjects(subjects) {}

    void display()
    {
        cout << "subjects" << subjects << endl;
    }
};

class OOPLab : public BEI, public BCT
{
private:
    int labs;

public:
    OOPLab(string &name, int rollNo, int marks, string &instructor, int subjects) : BEI(instructor), labs(labs), Student(name, rollNo, marks) {}

    void display()
    {
        cout << "labs" << labs << endl;
    }
};

int main()
{

    string name = "Bibek";
    string instr = "Saroj";

    OOPLab obj(name, 7, 45, instr, 10);
    return 0;
}
