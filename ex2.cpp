#include <iostream>
using namespace std;
class Parent {
public:
    int a, b;
    void addition() {
        cout << "Enter first number: ";
        cin >> a;
        cout << "Enter second number: ";
        cin >> b;
    }
    int add() {
        return a + b;
    }
    int subtract() {
        return a - b;
    }
};
class Child : public Parent {
public:
    void multiply() {
        int sum = add();
        int diff = subtract();
        int result = sum * diff;

        cout << "Addition: " << sum << endl;
        cout << "Subtraction: " << diff << endl;
        cout << "Multiplication of addition and subtraction: " << result << endl;
    }
};

int main() {
    Child obj;
    obj.addition();
    obj.multiply();

    return 0;
}

