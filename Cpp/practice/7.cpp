// Inheritance

#include <iostream>

using namespace std;

class Student
{
protected:
    int roll_no;

public:
    void readRollNo()
    {
        cout << "Enter Roll No: ";
        cin >> roll_no;
    }

    void displayRollNo()
    {
        cout << "Roll No.: " << roll_no << endl;
    }

    void test()
    {
        cout << "Base class Test";
    }
};

class Test : public Student
{
protected:
    int sub1Marks, sub2Marks;

public:
    void readMarks()
    {
        cout << "Enter Marks for Subject 1: ";
        cin >> sub1Marks;
        cout << "Enter Marks for Subject 2: ";
        cin >> sub2Marks;
    }

    void displayMarks()
    {
        cout << "Marks for Subject 1: " << sub1Marks << endl;
        cout << "Marks for Subject 2: " << sub2Marks << endl;
    }

    void test()
    {
        cout << "Test class Test";
    }
};

class Result : public Test
{
public:
    void displayResult()
    {
        displayRollNo();
        displayMarks();
        cout << "Total Marks: " << sub1Marks + sub2Marks << endl;
    }
    void test()
    {
        cout << "Result class Test";
    }
};

int main()
{
    Result result;
    result.readRollNo();
    result.readMarks();
    result.displayResult();

    result.test();
    result.Test::test();
    result.Student::test();

    return 0;
}