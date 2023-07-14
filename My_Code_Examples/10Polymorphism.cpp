#include<bits/stdc++.h>
using namespace std;

// polymorphism is like same car class BMW ki trh bhi use ho rhi
// same car class is used for swift also
// so same person / class acting / playing diff diff roles then it is nothing but polymorphism
class Car
{
    public:
        // this is a basix car and isme jo functions hai wo kisi bhi car me hone hi chahiye 
        // here there is only prototype of functions 
        // derived classes must override these functions 
        // and this is nothing but polymorphism
        virtual void start(){};
        // virtual void start()=0;
        // ye jo niche function hai wo ek pure virtual function hai wo to must hi hai ki  derived class usko override kre other wise the derived class will become abstract and this car class is already abstract we cant cretae an object of this class 
        // pure virtual function ko = 0 set kr dete hai 
        // we shoukd make the start also as a pure virtual function  but for better understanding i left as it is
        // *Main purpose of a pure virtual function is to achieve polymorphism*
        virtual void stop()=0;

};

// as the Car class is abstract and if the classes that are inheriting the car class or that are derived by car class will also become abstract if they are not overriding the pure virtual functions of the Base (Car) class
class Swift:public Car
{
    public:
        void start()
        {
            cout << "Swift car started." << endl;
        }
        void stop()
        {
            cout << "Swift car stopped." << endl;
        }
};


class BMW:public Car
{
    public:
        void start()
        {
            cout << "BMW car started." << endl;
        }
        void stop()
        {
            cout << "BMW car stopped." << endl;
        }
};

// abstract class we can say is a class in which each and every thing is pure virtual or the clas having some pure virtual and some concrete functions 
// abstract classes are class in which  some or all functions are pure virtual and we cant create an object of that class in the main function 
// but we can make a pointer of an abstract class in order to achieve polymorphism  i.e. Car *ptr;  ptr = new BMW; this is how polymorphism is achieved

// So now we can say the purpose of Inheritance is "Reusability" & to achieve "Polymorphism"

int main()
{
    // we can have a pointer of Car class but we cant create its object as it is a abstract class
    Car *ptr;
    // as base class is abstract we can create its object 
    // we cant access base class here as it is a abstract class 
    // the below line will show : object of abstract class type "Car" is not allowed
    // Car c;  
    return 0;
}