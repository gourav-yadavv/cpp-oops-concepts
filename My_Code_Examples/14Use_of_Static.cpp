#include <iostream>
using namespace std;

class Student
{
public:
    int roll;
    string name;
    // har time next admission no ko track krne ke liye isko static bna diya 
    static int admissionNo;
    Student(string n)
    {
        admissionNo++;
        roll = admissionNo;
        name = n;
    }
    void display()
    {
        cout << "Name: " << name <<  "  Roll No. " << roll << endl;
    }
};

int Student::admissionNo = 0;

int main()
{
    Student s1("Ojasva");
    Student s2("Tejender");
    Student s3("Vidushi");
    Student s4("Gourav");
    Student s5("Sameer");
    Student s6("Ramesh");

    s1.display();
    s6.display();
    s5.display();
    cout << "---------------" << endl;
    cout << "Number Admission " << Student::admissionNo << endl;
} 