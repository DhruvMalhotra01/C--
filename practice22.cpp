#include<iostream>
using namespace std;
int main(){
     int x;
     cout<<"enter a number:";
     cin>>x;
     if(x>100){
        cout<<"The number entered is greater than 100\n";
        if(x%2 == 0){
            cout<< "The number is an even number\n";
        }
        else{
            cout<< "The number is an odd number\n";
        }
     }else if (x<100 && x>10){
        cout<<"The number entered is not greater than 100\n";
        cout<<"And the number is greater than 10\n";
     
}else {
    cout<<"The number is less than 10\n";
}
return 0;
}