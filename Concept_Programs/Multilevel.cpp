#include<iostream>
using namespace std;

class Base
{
    public:
        int A,B;
        Base()
        {   
            cout<<"Inside Base constructor\n";
            A=11;
            B=21;
        }
        ~Base()
        {   cout<<"Inside Base destructor\n";   }
        void Fun()
        {   cout<<"Inside Base fun\n";  }
};
class Derived : public Base
{
    public:
        int X,Y;
        Derived()
        {   
            cout<<"Inside Derived constructor\n";
            X=51;
            Y=101;
        }
        ~Derived()
        {   cout<<"Inside Derived destructor\n";    }
        void Gun()
        {   cout<<"Inside Derived gun\n";   }
};
class DerivedX : public Derived
{
    public:
        int P;
        DerivedX()
        {   cout<<"Inside DerivedX constructor\n";
            P=111;
        }
        ~DerivedX()
        {   cout<<"Inside DerivedX destructor\n";    }
        void Sun()
        {   cout<<"Inside DerivedX Sun\n";   };
};

int main()
{
    DerivedX dobj;
    cout<<"Size of object is: "<<sizeof(dobj)<<"\n";
    
    cout<<dobj.A<<"\n";
    cout<<dobj.B<<"\n";
    cout<<dobj.X<<"\n";
    cout<<dobj.Y<<"\n";
    cout<<dobj.P<<"\n";

    dobj.Fun();
    dobj.Gun();
    dobj.Gun();

    return 0;
}