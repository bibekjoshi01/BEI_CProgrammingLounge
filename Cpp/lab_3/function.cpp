// To learn function, function overloading, inline function, and DMA

#include <iostream>
#define PI 3.14

// Function to calculate the area of cube
int calculateArea(int length = 10)
{
    return 6 * length * length;
}

// Function to calculate the area of circle
double calculateArea(double radius)
{
    return PI * radius * radius;
}

// Functino to calcuate the area of rectangle
double calculateArea(double length, double breadth)
{
    return length * breadth;
}

int main()
{
    int choice;
    do
    {
        std::cout << "Choose a shape to calculate area: " << std::endl;
        std::cout << "1. Cube\n2. Circle\n3. Rectangle\n4. Exit\n"
                  << std::endl;

        // User input for shape choice
        std::cout << "Enter your choice (1-4)";
        std::cin >> choice;

        switch (choice)
        {
        case 1:
        {
            int length;
            std::cout << "Enter lenght of the Cube: ";
            std::cin >> length;
            std::cout << "Area of the cube: " << calculateArea(length) << std::endl;
            break;
        }
        case 2:
        {
            double radius;
            std::cout << "Enter radius of the Circle: ";
            std::cin >> radius;
            std::cout << "Area of the Circle: " << calculateArea(radius) << std::endl;
            break;
        }
        case 3:
        {
            double length, breadth;
            std::cout << "Enter lenght of the Rectangle: ";
            std::cin >> length;
            std::cout << "Enter breadth of the Rectangle: ";
            std::cin >> breadth;
            std::cout << "Area of the Rectangle: " << calculateArea(length, breadth) << std::endl;
            break;
        }
        case 4:
        {
            std::cout << "Exiting the Program. GoodBye !" << std::endl;
            break;
        }
        default:
            // Invalid Choice
            std::cout << "Invalid choice. Please enter a number between 1 and 4." << std::endl;
            break;
        }
    } while (choice != 4);

    return 0;
}
