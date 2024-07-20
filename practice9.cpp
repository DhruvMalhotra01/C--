#include<iostream>
#include<cstring>
using namespace std;
int main(){
     string  name, dish;
     cout<<"Enter the name";
     getline(cin,name);
     cout<<"hello "<<name<<endl;
     cout<<"what your favourite dish?";
     getline(cin,dish);
     cout<< dish << "is delicious!!"<< endl;
     return 0;



}