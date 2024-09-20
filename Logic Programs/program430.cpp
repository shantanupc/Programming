#include<iostream>
using namespace std;

template <class T>
T Swap(T &A, T &B)
{
    T Temp;
    Temp = A;
    A = B;
    B = Temp;
}

int main()
{
    char Value1= 'A', Value2='B';

    cout<<"Value of Value1 variable is: "<<Value1<<"\n";
    cout<<"Value of Value2 variable is: "<<Value2<<"\n";

    Swap(Value1, Value2);

    cout<<"Value of Value1 variable is: "<<Value1<<"\n";
    cout<<"Value of Value2 variable is: "<<Value2<<"\n";

    return 0;
}