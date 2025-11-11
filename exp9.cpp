#include <iostream>
#include <string>
using namespace std;

class Student {
    string name;
    int age;

public:
    // Default constructor
    Student() : name(""), age(0) {}

    // Parameterized constructor (optional)
    Student(string n, int a) : name(n), age(a) {}

    // Friend function to overload extraction operator >>
    friend istream& operator>>(istream& in, Student& s) {
        cout << "Enter name: ";
        in >> s.name;
        cout << "Enter age: ";
        in >> s.age;
        return in; // Return input stream to allow chaining (cin >> s1 >> s2)
    }

    // Friend function to overload insertion operator <<
    friend ostream& operator<<(ostream& out, const Student& s) {
        out << "Name: " << s.name << ", Age: " << s.age;
        return out; // Return output stream to allow chaining (cout << s1 << s2)
    }
};

int main() {
    Student s1;

    // Use overloaded >> to read input
    cin >> s1;

    cout << "\nStudent details:\n";
    // Use overloaded << to print output
    cout << s1 << endl;

    return 0;
}

