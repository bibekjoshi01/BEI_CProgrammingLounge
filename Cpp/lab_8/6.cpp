#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;

class Student {
private:
    string name;
    string address;
    string program;

public:
    // Constructors
    Student() {}
    Student(const string& n, const string& addr, const string& prog) : name(n), address(addr), program(prog) {}

    // Getters
    string getName() const { return name; }
    string getAddress() const { return address; }
    string getProgram() const { return program; }

    // Setters
    void setName(const string& n) { name = n; }
    void setAddress(const string& addr) { address = addr; }
    void setProgram(const string& prog) { program = prog; }

    // Store student information to file
    void storeInfoToFile() const {
        ofstream file("students.txt", ios::app);
        if (file.is_open()) {
            file << name << " " << address << " " << program << endl;
            file.close();
            cout << "Student information stored successfully." << endl;
        } else {
            cout << "Unable to open file." << endl;
        }
    }

    // Retrieve student information from file
    static void retrieveInfoFromFile(const string& name) {
        ifstream file("students.txt");
        if (file.is_open()) {
            string line;
            bool found = false;
            while (getline(file, line)) {
                string studentName, address, program;
                istringstream iss(line);
                iss >> studentName >> address >> program;
                if (studentName == name) {
                    cout << "Name: " << setw(10) << left << studentName
                         << "Address: " << setw(20) << left << address
                         << "Program: " << program << endl;
                    found = true;
                }
            }
            if (!found) {
                cout << "Student with name '" << name << "' not found." << endl;
            }
            file.close();
        } else {
            cout << "Unable to open file." << endl;
        }
    }
};

int main() {
    int choice;
    do {
        cout << "1. Store Student Information" << endl;
        cout << "2. Retrieve Student Information by Name" << endl;
        cout << "3. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                string name, address, program;
                cout << "Enter student name: ";
                cin.ignore();
                getline(cin, name);
                cout << "Enter student address: ";
                getline(cin, address);
                cout << "Enter student program: ";
                getline(cin, program);
                Student student(name, address, program);
                student.storeInfoToFile();
                break;
            }
            case 2: {
                string name;
                cout << "Enter student name to retrieve information: ";
                cin.ignore();
                getline(cin, name);
                Student::retrieveInfoFromFile(name);
                break;
            }
            case 3:
                cout << "Exiting program." << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 3);

    return 0;
}
