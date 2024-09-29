#include<iostream>
using namespace std;

class FirstValue{
    public:
    int num1;
    void get(){
        cout<<"Enter value of num1:";
        cin>>num1;
    }
};
class SecondValue{
    public:
    int num2;
    void get(){
        cout<<"Enter value of num2:";
        cin>>num2;
    }
};
class Sum:public FirstValue, public SecondValue{
    public:
    void Total(){
        cout<<"Sum ="<< num1 + num2<<endl;
    }
};
int  main(){
    Sum obj1;
    obj1.FirstValue::get();
    obj1.SecondValue::get();
    obj1.Total();
    return 0;
}