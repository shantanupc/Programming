#include<iostream>
using namespace std;

//Approach 3: Using recurssion

void Display(int iNo)
{
    int i=1;

    while(i<=iNo)
    {
        cout<<i<<endl;
        i++;
    }
}

int main()
{
    int iValue=0;

    cout<<"Enter number: "<<endl;
    cin>>iValue;
    Display(iValue);

    cout<<"End of application"<<endl;

    return 0;
}