#include <iostream>
using namespace std;

// Base class for square
class Square {
public:
    int side1 = 20;
    int side2 = 40;

    void sArea() {
        cout << "Area of square is: " << side1 * side2 << endl;
    }
};

// Class for triangle
class Triangle {
public:
    void tArea() {
        int base = 43;
        int height = 34;
        cout << "Area of triangle is: " << 0.5 * base * height << endl;
    }
};

// Class for rectangle
class Rectangle {
public:
    int side1 = 20;
    int side2 = 40;

    void rArea() {
        cout << "Area of rectangle is: " << side1 * side2 << endl;
    }
};

int main() {
    Square squareObj;
    Triangle triangleObj;
    Rectangle rectangleObj;

    squareObj.sArea();
    triangleObj.tArea();
    rectangleObj.rArea();

    return 0;
}
