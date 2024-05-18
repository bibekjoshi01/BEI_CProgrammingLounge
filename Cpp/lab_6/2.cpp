#include <iostream>

using namespace std;

class Design1
{
public:
    // Constructor for Design1
    Design1(std::string code, int qty, double price) : code(code), qty(qty), price(price) {}

    // Public members
    std::string code;
    int qty;
    double price;
};

class Design2
{
private:
    // Private members
    std::string code;
    double value;

public:
    // Constructor for Design2
    Design2() : code(""), value(0) {}

    // // Method to convert from Design1 to Design2
    // void convertFromDesign1(const Design1 &design1Object)
    // {
    //     code = design1Object.code;
    //     value = design1Object.qty * design1Object.price;
    // }

    void operator=(const Design1 &design1Object)
    {
        code = design1Object.code;
        value = design1Object.qty * design1Object.price;
    }

    void display()
    {
        std::cout << code << std::endl
                  << value;
    }
};

int main()
{
    Design1 D1("ABCD", 50, 100.0);

    Design2 D2;
    // D2.convertFromDesign1(D1);
    D2 = D1;

    D2.display();
    return 0;
}