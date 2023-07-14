#include<iostream>
using namespace std;

class Base
{
    private: 
        int x;
    public:
        void func1(){}
        void func2(){}
        void func3(){}
};

class Derived:public Base
{
    private:
        int y;
    public:
        void func4(){}
        void func5(){}
};

int main()
{
    // base class pointer
    Base* p;
    // base class pointer pointing to derived class object
    p = new Derived;
    // so on this pointer p only the public chize of base class will be accessible it cant access any private members of base class and cant access any member of the derived class as it is a base class pointer
    // take an example there is a base class of type rectangle and a derived class called cuboid so if we made a pointer of class rectangle and initialized to an object of cuboid then it is partially true to say that the object is rectangle this is the concept but the pointer is showing that it is a rectangle so we cant call volume of cuboid or any operations on cuboid
    // we can do like that : ki ek derived class ka pointer lele and usme base class ka object assign krde ye nahi kr skte we cant say a rectangle is a cuboid 
    

    return 0;
}