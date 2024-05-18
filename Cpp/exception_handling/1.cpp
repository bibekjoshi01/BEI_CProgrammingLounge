// catching multiple exceptions

#include <iostream>
#include <stdexcept>
using namespace std;

class CustomException : public exception
{
private:
    string message;

public:
    CustomException(const string &msg) : message(msg) {}
    const char *what() const noexcept override
    {
        return message.c_str();
    }
};

int main()
{
    try
    {
        int choice;
        cout << "Enter choice (1-6): ";
        cin >> choice;

        if (choice == 1)
        {
            throw runtime_error("Runtime error occurred");
        }
        else if (choice == 2)
        {
            throw logic_error("Logic error occurred");
        }
        else if (choice == 3)
        {
            throw CustomException("Custom exception occurred");
        }
        else if (choice == 4)
        {
            throw "Unknown exception occurred";
        }
        else if (choice == 5)
        {
            throw 42;
        }
        else if (choice == 6)
        {
            throw 3.14;
        }
        else
        {
            throw 'x';
        }
    }
    catch (const runtime_error &ex)
    {
        cout << "Caught runtime error: " << ex.what() << endl;
    }
    catch (const logic_error &ex)
    {
        cout << "Caught logic error: " << ex.what() << endl;
    }
    catch (const CustomException &ex)
    {
        cout << "Caught custom exception: " << ex.what() << endl;
    }
    catch (const char *msg)
    {
        cout << "Caught unknown exception: " << msg << endl;
    }
    catch (const int &value)
    {
        cout << "Caught integer exception: " << value << endl;
    }
    catch (const double &value)
    {
        cout << "Caught double exception: " << value << endl;
    }
    catch (...)
    {
        cout << "Caught unknown exception" << endl;
    }

    return 0;
}
