#include<iostream>
using namespace std;

class Base{
    public:
      void fun1(){
          cout<<"Fun1"<<endl;
      }
      void fun2(){
          cout<<"Fun2"<<endl;
      }
      void fun3(){
          cout<<"Fun3"<<endl;
      }
};

class Child: public Base{
    public:
        void fun4(){
            cout<<"fun4"<<endl;
        }
       
}