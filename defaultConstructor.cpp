#include<iostream>
using namespace std;
class MyClass{
    public:
        int a,b;
        float c;
        MyClass(){
            cout<<"Default Constructor Invoked";
            cout<<a<<endl<<b<<endl<<c;

        }
};
int main(){
    MyClass myObj;
    return 0;
}