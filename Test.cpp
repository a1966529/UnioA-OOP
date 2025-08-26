#include <iostream>

class Rectangle {
private:
    double length;
    double width;

public:
    // Function to set dimensions
    void setDimensions(double l, double w) {
        length = l;
        width = w;
    }

    // Function to calculate area
    double calculateArea() {
        return length * width;
    }
};

int main() {
    Rectangle rect1; // Create an object of the Rectangle class
    rect1.setDimensions(5.0, 3.0); // Set dimensions for rect1
    std::cout << "Area of rect1: " << rect1.calculateArea() << std::endl;

    Rectangle rect2; // Create another object
    rect2.setDimensions(7.0, 4.0); // Set dimensions for rect2
    std::cout << "Area of rect2: " << rect2.calculateArea() << std::endl;

    return 0;
}