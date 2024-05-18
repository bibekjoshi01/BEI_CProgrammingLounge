#include <iostream>

using namespace std;

class Course
{
private:
    int c_id;
    string c_name;

public:
    Course() {}
    Course(int c_id, const string &c_name) : c_id(c_id), c_name(c_name) {}

    void display()
    {
        cout << "Course ID: " << c_id << endl;
        cout << "Course Name: " << c_name << endl;
    }

    ~Course()
    {
        cout << "Destructor of Course" << endl;
    }
};

class User
{

private:
    string name;
    int id;

public:
    User() {}
    User(int id, const string &name) : name(name), id(id) {}

    ~User()
    {
        cout << "Destructor of User" << endl;
    }
};

class Student : public User,
                public Course
{
private:
    int roll;

public:
    Student(int id, const string &name, int roll, int c_id, const string &c_name) : User(id, name), Course(c_id, c_name), roll(roll) {}

    ~Student()
    {
        cout << "Destructor of Student" << endl;
    }
};

int main()
{
    string name = "Aman";
    string course = "BEI";
    Student s1(1, name, 2, 101, course);
    return 0;
}