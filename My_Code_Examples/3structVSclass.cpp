#include<bits/stdc++.h>
using namespace std;


// in c++ structure is more like a class only
// in c we cant add functions inside the struct but here in c++ we can declare variables as well as functions inside the struct

// so the diff between struct and class in c++ is that in struct everything is public by default and in class everything is private by default this is the only diff 
struct Person
{
        int age;
        int weight;

        void showDetails()
        {
            cout << age << " " << weight << endl;
        }
};

int main()
{

    return 0;
}