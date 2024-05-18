#include <iostream>
#include <string>

class Course
{
public:
    Course(const std::string &course_name, const std::string &instructor)
        : course_name(course_name), instructor(instructor) {}

    void display_info() const
    {
        std::cout << "Course: " << course_name << "\nInstructor: " << instructor << std::endl;
    }

private:
    std::string course_name;
    std::string instructor;
};

class Mathematics : public Course
{
public:
    Mathematics(const std::string &course_name, const std::string &instructor, const std::string &branch)
        : Course(course_name, instructor), branch(branch) {}

    void display_info() const
    {
        Course::display_info();
        std::cout << "Branch: " << branch << std::endl;
    }

private:
    std::string branch;
};

class Science : public Course
{
public:
    Science(const std::string &course_name, const std::string &instructor, const std::string &field)
        : Course(course_name, instructor), field(field) {}

    void display_info() const
    {
        Course::display_info();
        std::cout << "Field: " << field << std::endl;
    }

private:
    std::string field;
};

class Engineering : public Course
{
public:
    Engineering(const std::string &course_name, const std::string &instructor, const std::string &specialization)
        : Course(course_name, instructor), specialization(specialization) {}

    void display_info() const
    {
        Course::display_info();
        std::cout << "Specialization: " << specialization << std::endl;
    }

private:
    std::string specialization;
};

class Physics : public Science
{
public:
    Physics(const std::string &course_name, const std::string &instructor, const std::string &field, const std::string &topic)
        : Science(course_name, instructor, field), topic(topic) {}

    void display_info() const
    {
        Science::display_info();
        std::cout << "Topic: " << topic << std::endl;
    }

private:
    std::string topic;
};

class Chemistry : public Science
{
public:
    Chemistry(const std::string &course_name, const std::string &instructor, const std::string &field, const std::string &topic)
        : Science(course_name, instructor, field), topic(topic) {}

    void display_info() const
    {
        Science::display_info();
        std::cout << "Topic: " << topic << std::endl;
    }

private:
    std::string topic;
};

int main()
{
    Mathematics math("Math101", "Dr. Bibek", "Pure Mathematics");
    Science science("Science101", "Dr. Saroj", "General Science");
    Engineering engineering("Engg101", "Dr. Deepak", "Computer Engineering");
    Physics physics("Physics101", "Dr. Aman", "Physics", "Classical Mechanics");
    Chemistry chemistry("Chemistry101", "Dr. Rohan", "Chemistry", "Organic Chemistry");

    math.display_info();
    std::cout << "\n";
    science.display_info();
    std::cout << "\n";
    engineering.display_info();
    std::cout << "\n";
    physics.display_info();
    std::cout << "\n";
    chemistry.display_info();

    return 0;
}
