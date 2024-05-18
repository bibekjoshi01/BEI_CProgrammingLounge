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

class Engineering : public Course
{
private:
    string branch;

public:
    Engineering() {}
    Engineering(int c_id, const string &c_name, const string &branch) : Course(c_id, c_name), branch(branch) {}

    void display()
    {
        cout << "Branch: " << branch << endl;
    }

    ~Engineering()
    {
        cout << "Destructor of Engineering" << endl;
    }
};

int main()
{
    Engineering obj(14, "BEI", "Electronics");
    obj.display();
    obj.Course::display();
    return 0;
}