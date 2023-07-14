#include<bits/stdc++.h>
using namespace std;

// lafda of private,protected and public 
class A {
public:
    int x;
  
protected:
    int y;
  
private:
    int z;
};
  
class B : public A {
    // x is public
    // y is protected
    // z is not accessible from B
};
  
class C : protected A {
    // x is protected
    // y is protected
    // z is not accessible from C
};
  
class D : private A // 'private' is default for classes
{
    // x is private
    // y is private
    // z is not accessible from D
};



// base class
class Person
{
    private:
        int age;
    public:
        int phoneNo;
        int UniqueID;
};


// privately derived class
// When a base class is privately inherited by the derived class, public members of the base class becomes the private members of the derived class and therefore, the public members of the base class can only be accessed by the member functions of the derived class. They are inaccessible to the objects of the derived class.
class Person1 : private Person{
    private:
        int aadharNo;
    public:
        string address;
};

// publicly derived class
// On the other hand, when the base class is publicly inherited by the derived class, public members of the base class also become the public members of the derived class. Therefore, the public members of the base class are accessible by the objects of the derived class as well as by the member functions of the derived class.
class Person2 : public Person{
    private:
        int aadharNo;
    public:
        string address;
};


int main()
{
    Person1 p1;
    Person2 p2;
    

    Person p;

    return 0;
}