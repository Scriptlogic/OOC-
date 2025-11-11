#include <iostream>
using namespace std;

// Base class
class Student {
protected:
    int studentID;
    string name;
public:
    void setStudentInfo(int id, string n) {
        studentID = id;
        name = n;
    }
    void displayStudentInfo() {
        cout << "Student ID: " << studentID << endl;
        cout << "Name: " << name << endl;
    }
};

// Derived class from Student
class StudentExam : public Student {
protected:
    int marks[3];  // marks in 3 subjects
public:
    void setMarks(int m1, int m2, int m3) {
        marks[0] = m1;
        marks[1] = m2;
        marks[2] = m3;
    }
    void displayMarks() {
        cout << "Marks in 3 subjects: ";
        for (int i = 0; i < 3; i++) {
            cout << marks[i] << " ";
        }
        cout << endl;
    }
};

// Derived class from StudentExam
class Result : public StudentExam {
private:
    int total;
    float percentage;
public:
    void calculateResult() {
        total = marks[0] + marks[1] + marks[2];
        percentage = total / 3.0;
    }
    void displayResult() {
        displayStudentInfo();
        displayMarks();
        cout << "Total Marks: " << total << endl;
        cout << "Percentage: " << percentage << "%" << endl;
    }
};

int main() {
    Result student1;
    student1.setStudentInfo(101, "Alice");
    student1.setMarks(85, 90, 78);
    student1.calculateResult();
    student1.displayResult();

    return 0;
}

