#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    string name;
    string lastName;
    int number;
public:
    void getEmployeeData() {
        cout << "Enter first name: ";
        cin >> name;
        cout << "Enter last name: ";
        cin >> lastName;
        cout << "Enter number: ";
        cin >> number;
    }
    void displayEmployeeData()  {
        cout << "Name: " << name << " " << lastName << endl;
        cout << "Number: " << number << endl;
    }
};

class Manager : public Employee {
private:
    string title;
    double clubDues;
public:
    void getManagerData() {
        getEmployeeData();
        cout << "Enter title: ";
        cin >> title;
        cout << "Enter golf club dues: ";
        cin >> clubDues;
    }
    void displayManagerData() {
        displayEmployeeData();
        cout << "Title: " << title << endl;
        cout << "Golf Club Dues: " << clubDues << endl;
    }
};

class Scientist : public Employee {
private:
    int publications;
    string school;
    string highestDegree;
public:
    void getScientistData() {
        getEmployeeData();
        cout << "Enter number of publications: ";
        cin >> publications;
        cout << "Enter name of school or university: ";
        cin.ignore();
        getline(cin, school);
        cout << "Enter highest degree earned (): ";
        cin >> highestDegree;
    }
    void displayScientistData() {
        displayEmployeeData();
        cout << "Number of Publications: " << publications << endl;
        cout << "School or University: " << school << endl;
        cout << "Highest Degree Earned: " << highestDegree << endl;
    }
};

class Labourer : public Employee {
public:
    void getLabourerData() {
        getEmployeeData();
    }
    void displayLabourerData() {
        displayEmployeeData();
    }
};

int main() {
    Manager manager;
    Scientist scientist1, scientist2;
    Labourer labourer;
    cout << "Enter data for manager 1\n";
    manager.getManagerData();
    cout << "\nEnter data for scientist 1\n";
    scientist1.getScientistData();
    cout << "\nEnter data for scientist 2\n";
    scientist2.getScientistData();
    cout << "\nEnter data for labourer 1\n";
    labourer.getLabourerData();
    cout << "Data on manager 1\n";
    manager.displayManagerData();
    cout << "\nData on scientist 1\n";
    scientist1.displayScientistData();
    cout << "\nData on scientist 2\n";
    scientist2.displayScientistData();
    cout << "\nData on labourer 1\n";
    labourer.displayLabourerData();

    return 0;
}