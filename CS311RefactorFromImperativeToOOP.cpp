// CS410RefactorFromImperativeToOOP.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>

// abstract base class
class Shape {
public:
    virtual float calculateArea() const = 0; // pure virtual function
    virtual float calculatePerimeter() const = 0; // pure virtual function
};

class Rectangle : public Shape {
private:
    float length;
    float width;
public:
    Rectangle(float length, float width) : length{ length }, width{ width } {}

    float calculateArea() const override {
        return length * width;
    }
    float calculatePerimeter() const override {
        return 2 * (length + width);
    }
};

class Circle : public Shape {
private:
    float radius;
public:
    Circle(float radius) : radius{ radius } {}
    float calculateArea() const override {
        const double PI = 3.14;
        return PI * radius * radius;
    }
    float calculatePerimeter() const override {
        const double PI = 3.14;
        return 2 * PI * radius;
    }
};

class Square : public Shape {
private:
    float side;
public:
    Square(float side) : side{ side } {}
    float calculateArea() const override {
        return side * side;
    }
    float calculatePerimeter() const override {
        return 4 * side;
    }
};

int main() {
    float length, width, radius, side;

    std::cout << "Enter the length and width of the rectangle: ";
    std::cin >> length >> width;
    Rectangle rectangle(length, width);
    std::cout << "Rectangle Area: " << rectangle.calculateArea() << ", Perimeter: " << rectangle.calculatePerimeter() << std::endl;

    std::cout << "Enter the radius of the circle: ";
    std::cin >> radius;
    Circle circle(radius);
    std::cout << "Circle Area: " << circle.calculateArea() << ", Perimeter: " << circle.calculatePerimeter() << std::endl;

    std::cout << "Enter the side length of the square: ";
    std::cin >> side;
    Square square(side);
    std::cout << "Square Area: " << square.calculateArea() << ", Perimeter: " << square.calculatePerimeter() << std::endl;

    return 0;
}
