#include<bits/stdc++.h>
using namespace std;

class Hey
{
    private:
        int a;
        int b;
    public:
    // this static member count will occupy space only once chahe aap kitne bhi objects bnalo Hey class ke 
    // static member count will be shareable for each and every object i.e. will be common for each object
    // or we can static members have only one copy of it or memory is allocated only once
    // we cant assign value to static variable inside the class we need to do it outside the class using :: operator
    // ans it is must if you declared a static member inside a class so you need to declare it outside also
        static int count;
        Hey()
        {
            count++;
            a = 5;
            b = 10;
        }

        // lets create a static member function
        // take care of one thing that the virtual functions can never be static****
        static int getcount()
        {
            // a++;  can do this ---- static member function cant access members which are not static ...static member func can only access static members of a class 
            count++;
            // yha count ke sath kuch bhi kr skte hai as the count is static member
            return count;
        }
};

// this is a static member of Hey class so we need to declare is outside the class also it is must 
// you will be thinking that this is a global variable and will be accessible throughout the program but nahi
// ye scope resolution operator ka use isliye kiya hai ki ye static variable class tk hi simit rhe
int Hey::count = 0;


int main()
{
    // how to access that count variable
    // lets see
    Hey h1;
    Hey h2;
    cout << "Count is : "<< h1.count << endl;
    cout << "Count is : " << h2.count << endl;
    Hey h3;
    cout << "Count is : " << h2.count << endl; //here i declared h3 and then printing count using h2 but still the count value you will gey is incrementes bcoz the count is class dependent not object dependent 

    // or we can access count as 
    cout << "Count is : " << Hey::count << endl;

    // so we can say static data members can be accessed using objects as well as using class name also
    // same static members function can also be accessed in both ways
    cout << h3.getcount() << endl;
    cout << Hey::getcount() << endl;
    return 0;
}