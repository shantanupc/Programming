#include<iostream>
using namespace std;

class Arithematic
{
    public:
        int Addition(int No1, int No2)
        {
            return No1+No2;
        }
        int Addition(int No1, int No2, int No3)
        {
            return No1+No2+No3;
        }
        double Addition(double No1, double No2)
        {
            return No1+No2;
        }
        double Addition(double No1, double No2, double No3)
        {
            return No1+No2+No3;
        }
};

int main()
{
    Arithematic obj;

    cout<<obj.Addition(11,21)<<"\n";
    cout<<obj.Addition(11,21,51)<<"\n";
    cout<<obj.Addition(89.90,21.67)<<"\n";
    cout<<obj.Addition(89.90,45.67,67.99)<<"\n";

    return 0;
}