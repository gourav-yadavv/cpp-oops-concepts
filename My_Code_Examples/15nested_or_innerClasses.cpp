#include <iostream>
using namespace std;

class outer
{
    // class inner;
    public:
        void fun()
        {
            i.display();
        }
        class inner
        {
            public:
                void display()
                {
                    cout << "display of inner" << endl;
                }
        };
        inner i;
};


int main()
{
    outer::inner i;
}

// ye wahi seen hai jaise apne ko ek class linked list ki bnana hai so Node wali class bhi uske andar hi bna skte hai taaki wo node ka structure faaltu sbko na dikhe bs linked list class ko hi dikhe