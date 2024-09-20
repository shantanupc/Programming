#include<iostream>
using namespace std;

class Base
{
    public:
        int A;
    private:
        int B;
    protected:
        int C;
    public:
        Base()
        {   A=10; B=20; C=30; }
        void Fun()
        {
            cout<<A<<"\n";
            cout<<B<<"\n";
            cout<<C<<"\n";
        }
};
class Derived : public Base
{
    public:
        void Gun()
        {
            cout<<A<<"\n";
            cout<<B<<"\n";
            cout<<C<<"\n";
        }
}:

int main()
{
    Base bobj;

    cout<<bobj.A<<"\n";
    cout<<bobj.B<<"\n";
    cout<<bobj.C<<"\n";
    return 0;
}