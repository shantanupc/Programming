#include<iostream>
using namespace std;

class Demo
{
    public:
        int X,Y;
        Demo()
        {
            Y=20;
        }
        void fun()      //non constant function
        {
            cout<<"Inside fun\n";
            X++;
            Y++;
        }
        void gun() const      //constant function
        {
            cout<<"Inside gun\n";
            //X++;
            //Y++;
        }
};

int main()
{
    Demo obj1;
    const Demo obj2;

    obj1.fun();
    obj1.gun();

    obj2.fun();
    obj2.gun();


    return 0;
}