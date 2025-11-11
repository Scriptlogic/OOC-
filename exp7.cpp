#include <iostream>
using namespace std;


class Student {
protected:
    int studentID;
    string studentName;

public:
    void inputStudentData() {
        cout << "Enter Student ID: ";
        cin >> studentID;
        cin.ignore();  
        cout << "Enter Student Name: ";
        getline(cin, studentName);
    }
};


class Course {
protected:
    string courseName;
    int courseCode;

public:
    void inputCourseData() {
        cout << "Enter Course Name: ";
        getline(cin, courseName);
        cout << "Enter Course Code: ";
        cin >> courseCode;
        
    }
};


class Result : public Student, public Course {
private:
    int marks;

public:
    void inputMarks() {
        cout << "Enter Marks Obtained: ";
        cin >> marks;
    }

    void display() {
        cout << "\n--- Student Result ---" << endl;
        cout << "Student ID: " << studentID << endl;
        cout << "Student Name: " << studentName << endl;
        cout << "Course Name: " << courseName << endl;
        cout << "Course Code: " << courseCode << endl;
        cout << "Marks Obtained: " << marks << endl;
    }
};

int main() {
    Result res;

    res.inputStudentData();
    res.inputCourseData();
    res.inputMarks();

    res.display();

    return 0;
}

