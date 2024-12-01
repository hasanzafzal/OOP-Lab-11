#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    string address;
    int roll_no;

public:
    void getdata() {
        cout << "Enter the name = ";
        getline(cin, name);
        cout << "Enter the address = ";
        getline(cin, address);
        cout << "Enter the roll number: ";
        cin >> roll_no;
    }

    void print() {
        cout << "Name: " << name << endl;
        cout << "Address: " << address << endl;
        cout << "Roll No: " << roll_no << endl;
    }
};

class Marks {
private:
    int marks_subject1;
    int marks_subject2;
    int marks_subject3;
    int total_marks;
    float average_marks;

public:
    void input_marks() {
        cout << "Enter the marks in subject 1: ";
        cin >> marks_subject1;
        cout << "Enter the marks in subject 2: ";
        cin >> marks_subject2;
        cout << "Enter the marks in subject 3: ";
        cin >> marks_subject3;
    }

    void show_detail() {
        total_marks = marks_subject1 + marks_subject2 + marks_subject3;
        average_marks = total_marks / 3.0;
        cout << "Marks in subject 1: " << marks_subject1 << endl;
        cout << "Marks in subject 2: " << marks_subject2 << endl;
        cout << "Marks in subject 3: " << marks_subject3 << endl;
        cout << "Total marks: " << total_marks << endl;
        cout << "Average: " << average_marks << endl;
    }
};

class Show : public Student, public Marks {
public:
    void show_rec() {
        getdata();
        input_marks();
        cout << "The complete record is: " << endl;
        print();
        show_detail();
    }
};

int main() {
	Show s;
	s.show_rec();
	return 0;
}