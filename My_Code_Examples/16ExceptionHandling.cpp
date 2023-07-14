#include <iostream>
using namespace std;

/*
Types of error :
1. Syntax error : these are the errors which are occured due to mistake of programmer and compiler helps us to find & correct them

2. Logical Error : as the programmmer made a mistake in logic building so the output is not as expected so this is difficult to find . Programmer ko wps pura logic dekhna pdega eg. kisi sorting ko implement krna chah rhe but kahi ittu sa logic glt kr diya and you are not getting  a sorted array and debugger helps us to detect and correct that error

3. Runtime error : these errors are occured at user end while using the program these errors can be due to bad input or due to lack or resources needed to the program ....or we can say these as *Exceptions*

*So in exception handling we handles the errors only

*/

// below is the class named myexception
class myexception: exception
{

};
int division2(int a,int b)throw(myexception)
{
	if(b==0)
		throw myexception();
	return a/b;
}

// ye function me apn prototype ke baad hi bta skte hai ki ye kya throw krega jruri nahi hai but bta skte hai
// and c++ ki yahi baat acchi hai kuch krna chahte ho to kro nahi kroge to bhi koi dikkat nahi hai 
// if throw() this empty throw is used means that the functions trows nothing
int division1(int x,int y) throw(int)
{
    if(y==0)
        throw 69;
    else
        return (x/y);
}

int main()
{
	int x,y,z;
    cout << "Enter values of x & y : " ;
    cin >> x >> y ;

    // throw and catch
    // but you will think that yahi kaam can be done using if and else also so now we will see main use of throw and catch nby using them between functions
    // there can be more than one catch blocks there can be the case in try we will be trowing int for some error and will be throwing float for some other error and many more so we can write another catch blocks below the 1st catch block
    // and when you writes catch(...) this is called catch all and it cases all types of exceptions and you can give a common error message here for all errors and this catch all block must be the last catch block
	try
	{
		if(y==0)
			throw 69;
		z=x/y;
		cout<< "x/y is: " << z<<endl;
	}
	catch(int e) 
	{
		cout<<"Division by zero ! Error Code: " << e <<endl;
	}

	// ab yahi kaam jo divide wala yahi kr rhe the wo ek function se krate hai then that function will inform us that there is an error so here we will understand why we need this throw-catch
    // here we can see how throw and catch is helping the functions to communicate
    // we can throw anything we want its not necessry to throw just an integer you can throw a double , float , char ,string also
    // we can crete our own class of exception and we can throw that also and we can also inherit our custom exception class from c++ exception class
    cout << "Enter values of x & y : " ;
    cin >> x >> y ;
    try
	{
		z=division1(x,y);
		cout<< "x/y is: " << z << endl;
	}
	catch(int e) //id there is any exception thrown by the division function then main function will catch and throw error for the same
	{
		cout<<"Division by zero ! Error Code: " << e <<endl;
	}
    return 0;
}