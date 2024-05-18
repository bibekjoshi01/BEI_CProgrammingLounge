#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class Student
{
private:
    string registrationNumber;
    string name;
    string program;
    string contactNumber;
    string address;

public:
    Student() {}
    Student(const string &regNum, const string &name, const string &program, const string &contact, const string &address)
        : registrationNumber(regNum), name(name), program(program), contactNumber(contact), address(address)
    {
    }

    friend ostream &operator<<(ostream &out, const Student &student);
    friend istream &operator>>(istream &in, Student &student);
};

ostream &operator<<(ostream &out, const Student &student)
{
    out << "Registration Number: " << student.registrationNumber << std::endl;
    out << "Name: " << student.name << std::endl;
    out << "Program: " << student.program << std::endl;
    out << "Contact Number: " << student.contactNumber << std::endl;
    out << "Address: " << student.address << std::endl;
    return out;
}

istream &operator>>(istream &in, Student &student)
{
    std::cout << "Enter Registration Number: ";
    std::getline(in, student.registrationNumber);
    std::cout << "Enter Name: ";
    std::getline(in, student.name);
    std::cout << "Enter Program: ";
    std::getline(in, student.program);
    std::cout << "Enter Contact Number: ";
    std::getline(in, student.contactNumber);
    std::cout << "Enter Address: ";
    std::getline(in, student.address);
    return in;
}

int main()
{
    const std::string filename = "students.dat";

    {
        ofstream file(filename, ios::binary);

        if (!file.is_open())
        {
            cerr << "Error opening file for writing. " << endl;
            exit(1);
        }

        for (int i = 0; i < 1; ++i)
        {
            Student student;
            cin >> student;
            file.write(reinterpret_cast<const char *>(&student), sizeof(Student));
        }

        std::cout << "Student information has been written to file." << std::endl;
    }
    {
        std::ifstream file(filename, std::ios::binary);
        if (!file)
        {
            std::cerr << "Error opening file for reading." << std::endl;
            return 1;
        }

        Student student;
        std::cout << "Student information read from file:" << std::endl;
        while (file.read(reinterpret_cast<char *>(&student), sizeof(student)))
        {
            std::cout << student << std::endl;
        }
    }

    return 0;
}