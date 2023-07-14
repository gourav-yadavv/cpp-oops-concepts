#include<bits/stdc++.h>
using namespace std;

class Person
{
    private:
        int age;
    public:
        int height;
        int weight;
        Person()
        {
           height = weight = 0;
        }
        Person(int height,int weight)
        {
            this->height = height;
            this->weight = weight;
        }

        void setAge(int age)
        {
            this->age = age;
        }
};

int main()
{
    // simple object 
    Person p1;
    p1.height = 5;
    p1.weight = 60;

    // poiner to an object in heap
    Person *p2 = new Person();
    p2->height = 6;
    p2->weight = 62;

    cout << p1.height << " " << p1.weight << " " << endl;
    cout << p2->height << " " << p2->weight << " " << endl;

    return 0;
}