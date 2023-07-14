#include<iostream>
using namespace std;

class Base
{
    private: 
        int x;
    public:
        void func1(){cout << "function1 of base class" << endl;}
        virtual void func2(){cout << "virtual function2 of base class" << endl;}
};

class Derived:public Base
{
    private:
        int y;
    public:
        // here we are redefinind or chnaging the inner content of the fucntion of base class so this is noting but function overriding
        void func1(){cout << "function1 of derived class" << endl;}
        void func2(){cout << "virtual func of base class getting overrided in derived class" << endl;}
};



int main()
{
    // so now you will see that the object of derived class will display the function content writeen in it only that means it will show "function of derived class" 
    Base B;
    B.func1();
    cout << "------------------------" << endl;
    Derived D;
    D.func1();
    cout << "------------------------" << endl;

    // this below is how can we call func1 of base class from derives class object 
    D.Base::func1();
    cout << "------------------------" << endl;

    // now lets create a base class pointer and assign it with a derived class object 
    Base *ptr;
    ptr = new Derived;
    // now lets see when we will call ptr.func1() which function will get called
    // to yaha base class ka pointer bnaya hai to base class ka hi function hi call hoga
    ptr->func1();
    cout << "------------------------" << endl;
    // but if the function is virtual inside the base class then on the derived class object the derived class fucntion only will get called
    // now we will make a func2 as virtual in base class and we will override that and then will se kya hota hai 
    // you will see now ki ab base class ke pointer se derived class ke object pr func2 call kroge to derived class ka hi function call hoga
    Base* ptr1;
    ptr1 = new Derived;
    ptr1->func2();

    return 0;
}