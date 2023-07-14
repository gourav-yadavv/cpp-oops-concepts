// overloading ka mtlb kya hai lets understand
// jaise ki hmare pas bhut saare operators hai c++ me like +,/,*,-,.....many more and they perfom operation in b/w pre declared  data types like int , float ,char.... but what if we want to add two matrices so can we rewrite definition of + operatior which will take two matrices and will add then and will return a  matrix yes we can and this is called operator overloading 
// same we can overload + , - , * for performing operations on complex numbers
// here we will also do friend function overloading 
// here we will also see how to overload insertion operatore << >> ...i.e. what if we directly want a complex no as input cin >> c1 & as output also cout << c1  so we need to overload these operators

#include<bits/stdc++.h>
using namespace std;


class ComplexNum
{
    private:
        int realPart ;
        int imgPart;
    public:
        ComplexNum(int a=0,int b=0)
        {
            realPart = a;
            imgPart = b;
        }

        

        // this is how we wrote a simple add function and added two complex numbers
        ComplexNum add(ComplexNum C)
        {
            ComplexNum temp ;
            temp.realPart = realPart + C.realPart;
            temp.imgPart = imgPart + C.imgPart;
            return temp;
        }

        // now we will overload + operator for complex numbers 
        // we need to just right operator+ instead of the add and we succcessfully overloaded + operator
        // ComplexNum operator+(ComplexNum C)
        // {
        //     ComplexNum temp ;
        //     temp.realPart = realPart + C.realPart;
        //     temp.imgPart = imgPart + C.imgPart;
        //     return temp;
        // }
        
        // this is a friend function overloading it is like if you have money and your friend also has money so you will give money of u & ur friend to another friend to add and return the sum
        // we  will write this fucntion outside the class and we dont need any scope resolution operator
        friend ComplexNum operator+(ComplexNum c1,ComplexNum c2);

        void display()
        {
            cout << "Complex number is : " << realPart << " + " << imgPart << "i" << endl;
        }

        // here we will write code in order to overload << operator i.e. cout << complexNum so that we have no need to call display function over a complex number
        // it will take ostream objext as parameter and a complex no also as parameter
        // ans we need to return the output to the cout only so the return type will be ostream only
        // and ye 2 parameter le rha so it can be a part of a class 
        // we will make it friend and declare outside
        // friend function ka use krkr insersion operator overload kr skte hai 
        // friend  ostream & operator<<(ostream &out,ComplexNum &C);

        // ye jo upr ostream return kra hai  jruri nahi hai we can make it as void also 
        friend  void operator<<(ostream &out,ComplexNum &C);
};

// ostream & operator<<(ostream &out,ComplexNum &C)
// {
//     out << "Complex number is : " << C.realPart << " + " << C.imgPart << "i" << endl;
//     return out;
// }


// ostream return krna not jruri
// but ye void wala use krenge to only we can write is cout << c1  we can write cout << c1 << end not we cn write cout << c1 << c2 ;
// so ostream& return type hi rkhna sahi hai
void operator<<(ostream &out,ComplexNum &C)
{
    out << "Complex number is : " << C.realPart << " + " << C.imgPart << "i" << endl;
    // return out;
}

// this function is independent function but it is friend of the class so we dont used score resolution
// and to call this we dont need to chng anything same way we need to call c3 = c1+c2 it will take c1& c2 as parameter
ComplexNum operator+(ComplexNum c1,ComplexNum c2)
{
    ComplexNum temp;
    temp.realPart = c1.realPart + c2.realPart;
    temp.imgPart = c1.imgPart + c2.imgPart;
    return temp;
}

int main()
{
    ComplexNum c1(2,3);
    ComplexNum c2(5,8);

    // added using simple add function
    ComplexNum c3 = c1.add(c2);
    c3.display();
    // now we add using the overloaded operator
    ComplexNum c4 = c1 + c2;
    c4.display();

    cout << c4;
    // we can also write this statement as 
    operator<<(cout,c4);

    
    return 0;
}