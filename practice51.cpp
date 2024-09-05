#include<iostream>
#include<string>
using namespace std;
class student{
    string name;
    int rollno;

    public:
        void initialize(string n, int r);
        void display();
};
void student::initialize(string n, int r){
    name=n;
    rollno=r;
}
void student::display(){
    cout<<"student details: \n";
    cout<<"rollno:"<<rollno<<endl;
    cout<<"name"<<name<<endl;
}