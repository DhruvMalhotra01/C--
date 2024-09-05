#include<iostream>
using namespace std;
void swap(int&,int&);
int main(){
    int a  = 45 , b= 35;
    cout<<"Before swapping"<<endl;
    cout<<" a = "<<a<<"b = "<< b <<endl;
    swap(a,b);

    cout<<"After Swap with pass by address\n";
    cout<<" a = "<<a<<"b = "<< b <<endl;
    return 0;
}
void swap(int &x ,int &y){
    int z = x;
    x = y;
    y= z;
}