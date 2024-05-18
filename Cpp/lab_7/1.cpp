#include <iostream>

using namespace std;

class Student
{
public:
    int stuID;
    string stuName;

    void getStudentInfo()
    {
        cout << "Enter Student ID: ";
        cin >> stuID;
        cout << "Enter Student Name: ";
        cin >> stuName;
    }

    void displayStudentInfo()
    {
        cout << "Student Info: " << endl;
        cout << "ID: " << stuID << endl;
        cout << "Name: " << stuName << endl;
    }
};

class Test : public Student
{
public:
    int test1, test2, test3;
    void getTestScores()
    {
        cout << "Enter your test scores: (test1 test2 test3): ";
        cin >> test1 >> test2 >> test3;
    }

    void displayTestScores()
    {
        cout << "Test1: " << test1 << "\nTest2: " << test2 << "\nTest3: " << test3 << endl;
    }
};

class Result : public Test
{
public:
    int totalMarks;

    void calculateTotalMarks()
    {
        totalMarks = test1 + test2 + test3;
    }

    void dispalyTotalMarks()
    {
        cout << "Total Marks: " << totalMarks << endl;
    }
};

int main()
{
    Result stuResult;
    stuResult.getStudentInfo();
    stuResult.getTestScores();
    stuResult.calculateTotalMarks();

    cout << "\nStudent Record: " << endl;
    stuResult.displayStudentInfo();
    stuResult.displayTestScores();
    stuResult.dispalyTotalMarks();

    return 0;
}