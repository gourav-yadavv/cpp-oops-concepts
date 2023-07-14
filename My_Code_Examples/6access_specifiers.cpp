#include<bits/stdc++.h>
using namespace std;

// SUMMARY
// kisi bhi class ke andar uske private,protected & public teeno members accesible hai 
// koi class jo inherited hai unke andar base class ke public & protected hi accesible honge
// kisi bhi class ke object ko sirf class ke public chizo ka access hoga baaki kuch bhi nahi hoga na hi private na hi protected


class Base
{
    private:
        int x;
    protected:
        int y;
    public:
        int z;
        void fun_of_base(int x,int y,int z)
        {
            this->x = x;
            this->y = y;
            this->z = z;
        }
};

class Derived:public Base
{
    public:
        void fun_of_derived()
        {
            // x = 1; a derived class can not access private members of its base class  it can access only protected and public members
            y = 2;
            z = 3;
        }
};

int main()
{
    Base b1;
    // b1.x = 5;  //you cant access a private member of a class on its object
    // b1.y = 10;  you cant access a protected member of a class on its object also
    // only thing you can acchess upon an object is public members 
    b1.z = 3; // we can access z as it is a pubic member 
    return 0;
}