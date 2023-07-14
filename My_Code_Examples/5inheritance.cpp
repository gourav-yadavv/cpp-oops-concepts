#include<bits/stdc++.h>
using namespace std;

// two imp terms
// if a class is inheriting from some class then it "isA" Base class
// if a class is having an object of some class then it "hasA" object of xyz class 
// main purpose of inheritance is "Reusability"

class Base
{
    int x;
    int y;
    public:
        Base()
        {
            cout << "Default constructor of base class called." << endl;
        }
        Base(int x,int y)
        {
            cout << "Parametarized constructor of base class called." << endl;
            this->x = x;
            this->y = y;
        }
        void show()          {    cout << "X = " << x << " & Y = " << y << endl;    }
        void set_x(int x)    {    this->x = x;  }
        void set_y(int y)    {    this->y = y;  }
        int get_x()          {    return x;     }
        int get_y()          {    return y;     }

        ~Base(){cout << "Destructor of base class." << endl;}
};

// Derived class cant access the private members of base class directly 
// Derived class can use methods of base class to access private members of base class
class Derived:public Base
{
    int z;
    public:
        Derived()
        {
            cout << "Default constructor of base Derived called." << endl;
        }
        Derived(int x,int y,int z):Base(x,y)
        {
            cout << "Parametarized constructor of Derived class called." << endl;
            // this->x = x;
            // set_x(x);
            // this->y = y;
            // set_y(y);
            this->z = z;
        }
        // How to call constructor of base class from derived class lets see here
        // IMPORTANT
        // ye :Base(x,y)  upr wale function me bhi lga skte hai maine lga diya hai 
        Derived(int x,int y):Base(x,y)
        {
            cout << "From derived class we called the parametarized constructor of base class." << endl;
        }
        void display()
        {
            cout << "X = " << get_x() << " , Y = " << get_y() << " & Z = "<< z <<  endl;
        }

        ~Derived(){cout << "Destructor of derived class." << endl;}
};

int main()
{
    // here we created an object of base class with parameterized constructor so default constructor will not get called 
    Base B(5,10);
    B.show();
    cout << " ------------------------------------------------ " << endl;
    // ab ye derive class ka object bnaya to ye x & y ko apn ne phle base class bnaye time 5 and 10 diye the wo nahi dega
    // ye defauly value 0 hi dega we need to assign the values to it

    // whenever we created an object of derived class the defaulr constructor of parent class / base class is also called
    // so phle base class ka default constructor call hoga then ye niche parametarized derived class ka constructor call hoga 
    Derived D(5,6,7);
    // D.y = 6;
    // D.show();
    // D.x = 1;
    D.display();
    cout << " ------------------------------------------------ " << endl;

    Derived D1(3,5);
    D.display();
    return 0;
}