#include <iostream>

class Polygon
{
protected:
    float length, height;

public:
    Polygon() : length(0), height(0) {}
    Polygon(float l, float h) : length(l), height(h) {}
    virtual void Area() = 0;
    virtual ~Polygon() {}
    friend std::istream &operator>>(std::istream &input, Polygon &p);
    friend std::ostream &operator<<(std::ostream &output, const Polygon &p);
};

class Rectangle : public Polygon
{
public:
    Rectangle(float l = 0, float h = 0) : Polygon(l, h) {}

    void Area() override
    {
        float area = length * height;
        std::cout << "Rectangle area: " << area << std::endl;
    }

    friend std::istream &operator>>(std::istream &input, Rectangle &r)
    {
        input >> r.length >> r.height;
        return input;
    }

    friend std::ostream &operator<<(std::ostream &output, const Rectangle &r)
    {
        output << "Rectangle[length: " << r.length << ", height: " << r.height << "]";
        return output;
    }
};

class Triangle : public Polygon
{
public:
    Triangle(float l = 0, float h = 0) : Polygon(l, h) {}

    void Area() override
    {
        float area = 0.5 * length * height;
        std::cout << "Triangle area: " << area << std::endl;
    }

    friend std::istream &operator>>(std::istream &input, Triangle &t)
    {
        input >> t.length >> t.height;
        return input;
    }

    friend std::ostream &operator<<(std::ostream &output, const Triangle &t)
    {
        output << "Triangle[length: " << t.length << ", height: " << t.height << "]";
        return output;
    }
};

int main()
{
    Rectangle rect;
    Triangle tri;

    std::cout << "Enter length and height for rectangle: ";
    std::cin >> rect;
    std::cout << rect << std::endl;
    rect.Area();

    std::cout << "Enter length and height for triangle: ";
    std::cin >> tri;
    std::cout << tri << std::endl;
    tri.Area();

    return 0;
}
