#include <iostream>
#include <string>
#include <limits>

using namespace std;

class Person {
public:
    int cyear;
    string name, department, course, identity;

    void setdata() {
        cout << "Enter Person's Information:" << endl;
        cout << "================================================" << endl;
        
        cout << "[+] Name: ";
        getline(cin, name);
        
        cout << "[+] Department: ";
        getline(cin, department);
        
        cout << "[+] Course: ";
        getline(cin, course);
        
        cout << "[+] Year: ";
        cin >> cyear;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        cout << "[+] Identity: ";
        getline(cin, identity);
    }

    void getdata() {
        cout << "================================================" << endl;
        cout << "Here is Person's Information:" << endl;
        cout << "================================================" << endl;
        cout << "[-] Name: " << name << endl;
        cout << "[-] Department: " << department << endl;
        cout << "[-] Course: " << course << endl;
        cout << "[-] Year: " << cyear << endl;
        cout << "[-] Identity: " << identity << endl;
    }
};

class Student : public Person {
public:
    int rollno;
    double mobileno;
    string section;

    void setdata() {
        Person::setdata(); // Call parent logic first

        cout << "[+] Roll No: ";
        cin >> rollno;
        
        cout << "[+] Mobile No: ";
        cin >> mobileno;
        
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
        cout << "[+] Section: ";
        getline(cin, section);
    }

    void getdata() {
        Person::getdata(); // Call parent display
        cout << "[-] Roll No: " << rollno << endl;
        cout << "[-] Mobile No: " << mobileno << endl;
        cout << "[-] Section: " << section << endl;
        cout << "************************************************" << endl;
    }
};

int main() {
    system("cls");

    Student s;
    s.setdata();
    s.getdata();

    return 0;
}