#include<bits/stdc++.h>
using namespace std;

class Person
{
    private:
        int age;
        string name;
    public:
        int height;
        int weight;
        // 1. non parmaterized constructor
        // Person()
        // {
        //    height = weight = 0;
        // }

        // 2. paramaterized constructor
        // jo default values tum non parametrized me de rhe ho wahi yha default dedo to upr wala bnane ki jrurt hi nahi hai
        Person(int height=0,int weight=0)
        {
            this->height = height;
            this->weight = weight;
        }

        // 3. Copy constructor
        // cpy constructor willnot take care of dynamic memory allocated if we are copying p to another object 
        // and if any dynamic memeory is allocated in p then the new object will also point to the same dynamic memory
        // hence we need to take care and we make a deep copy constructor 
        // so there can be two types of copy constructors there can be a shallow copy constructor and a deep copy constructor
        Person(Person &p)
        {
            this->age = p.age;
            this->height = p.height;
            this->weight = p.weight;
        }

        // the below funciton setAge we defined this function is called inline function as we defined the prototype as well as the definition of the function within the class only
        // whenever this inline funciton will get called by any object inside the main function then that function call will get replaced by this whole function within the main function but whatif the function is not inline
        // inline functions are functions which expands them into the same line there is no seperate block for them
        // in inline functions the whole code will get pasted or get copied in place of the function call no seperate block

        // when you write a function inside the class fully then it is inline function only
        void setAge(int age)
        {
            this->age = age;
        }

        // below are just prototypes of the functions the definitions are written outside the class 
        // an to write the definitions we used scope resolution operators
        // these two functions are not inline so whenever any object will call these functions in the main function then the function call will redirect to the definitions of these functions instead of replacing the call by the whole code it will go to the function definition then from there only it will get the output

        // its always good practice to write the functions outside the class 
        // when you write any function outside the class using scope resolution operator then its automatically not inline
        void setName(string name);

        // how we can make a function whose definition is writeen outside the class 
        // so we just need to write inline before its prototype or declaration then wherever you will define it it will be inline
        // below function is inline kahi bhi likh do ab isko
        inline void printName();

        // this is the destructor
        ~Person();
};

// here we will define the functions of class outside the class using scope resolution operator
void Person :: setName(string name)
{
    this->name = name;
}

void Person ::printName()
{
    cout <<" Person name is :" << name << endl;
}

int main()
{
    // Person *p2 = new Person;
    // upr wala code likho ya niche wala dono case me same constructor the empty one will get called
    Person *p2 = new Person();
    p2->height = 6;
    p2->weight = 62;
    cout << p2->height << " " << p2->weight << " " << endl;
    // p2 is called over empty constructor so we need to set length and breath by our own

    Person p3(5,55);
    cout << p3.height << " " << p3.weight << " " << endl;

    Person p4(p3);

    cout << p4.height << " " << p4.weight << " " << endl;

    p2->setName("Gourav");
    p2->printName();
    return 0;
}