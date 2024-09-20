#include<iostream>
using namespace std;

class Base
{
    public:
        int A,B;
        void Fun()      //1000  Defination
        {   cout<<"Base Fun\n"; }
        void Gun()      //2000  Defination
        {   cout<<"Base Gun\n"; }
        void Sun()      //3000  Defination
        {   cout<<"Base Sun\n"; }
};

class Derived : public Base
{
    public:
        int X,Y;
        void Gun()      //4000  Defination
        {   cout<<"Derived Gun\n";  }
        void Sun()      //5000  ReDefination
        {   cout<<"Derived Sun\n";  }
        void Run()      //6000  ReDefination
        {   cout<<"Derived Run\n";  }
};

int main()
{
    Base bobj;
    Derived dobj;

    bobj.Fun();
    bobj.Gun();
    bobj.Sun();

    dobj.Fun();
    dobj.Gun();
    dobj.Sun();
    dobj.Run();

    return 0;
}