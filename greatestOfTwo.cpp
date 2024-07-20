#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"enter the two number";
    cin>>a>>b;
    if(a>b)
    {
        cout<<"the first number is greater",a;
    }
    else if(b>a)
    {
        cout<<"the second number is greater",b;
    }
    else
    {
        cout<<"same number";
    }
    return 0;

}
