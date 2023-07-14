// here we will see Inner classes *or* friend and static members
#include<bits/stdc++.h>
using namespace std;
// frnd class ko base ke baad define krne se phle usko yha declare kr dena  otherwise compiler will say that the 
class frndClass;
class Base
{
    private:
        int x;
    protected:
        int y;
    public:
        int z;
    
    // this function is a friend function of this class and this can access each and every member of this class over an object
    // kisi object pr hi sb kuch access kr skta he ye function aaise bina object access nahi kr skta kuch
    friend void func();
    // friend class
    // niche wali line tabhi valid hogi jab tumne upr is name ki class ko declare kr diya hoga otherwise wo frnd nahi bnegi
    // i.e. it need the definition / prototype of frndClass  before hand
    friend frndClass;
};


// this is a friend function & if we want to access members of base class over an object in some other class *that is not derived from base class*, so there comes the concept of friend class lets see it also after friend function 
void func()
{
    // as this function is a friend fucntion of base class so it can access each and every member of base class whether the member is private or protected also  it can access as it is a friend
    Base B;
    B.x = 10;
    B.y = 5;
    B.z = 8;
}

// friend class
// as this class is containing objects of base class then it is also called container of objects of base class
class frndClass
{
    public:
        Base b; //base class ka object
        void fun()
        {
            cout << b.x;
        }
        
};

int main()
{
    return 0;
}