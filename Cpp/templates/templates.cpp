// Write a program that will find the sum and average of elements in an
// array
// a. Using function templates pass array and size
// b. using class templates (attribute-array, method-sum, avg)

// Function template to find sum and average of elements in an array

#include <iostream>

template <typename T>
void sumAndAverage(const T arr[], int size, T &sum, double &avg)
{
    sum = 0;
    for (int i = 0; i < size; ++i)
    {
        sum += arr[i];
    }
    avg = static_cast<double>(sum) / size;
}

// Class Template
template <typename T, int size>
class ArrayProcessor
{
private:
    T elements[size];

public:
    ArrayProcessor(const T (&arr)[size])
    {
        for (int i = 0; i < size, ++i)
        {
            elements[i] = arr[i];
        }
    }

    T sum() const
    {
        T total = 0;
        for (int i = 0; i < size; ++i)
        {
            total += elements[i];
        }
        return total;
    }

    double average() const
    {
        return static_cast<double>(sum()) / size;
    }
};

int main()
{
    const int intArray[] = {1, 2, 3, 4, 5};
    const double doubleArray[] = {1.5, 2.5, 3.5, 4.5, 5.5};

    // using Function template
    int intSum;
    double intAvg;
    sumAndAverage(intArray, 5, intSum, intAvg);
    std::cout << "Sum of integers: " << intSum << ", Average of integers: " << intAvg << std::endl;

    double doubleSum;
    double doubleAvg;
    sumAndAverage(doubleArray, 5, doubleSum, doubleAvg);
    std::cout << "Sum of doubles: " << doubleSum << ", Average of doubles: " << doubleAvg << std::endl;

    // Using Class Template
    ArrayProcessor<int, 5> intProcessor(intArray);
    std::cout << "Sum of integers using class template: " << intProcessor.sum() << ", Average of integers: " << intProcessor.average() << std::endl;

    ArrayProcessor<double, 5> doubleProcessor(doubleArray);
    std::cout << "Sum of doubles using class template: " << doubleProcessor.sum() << ", Average of doubles: " << doubleProcessor.average() << std::endl;

    return 0;
}