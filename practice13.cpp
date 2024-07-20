#include<iostream>
using namespace std;
int main(){
    int x;
    while(true){
        cout<< "/n enter an interger:";
        cin>>x;
        if(cin.good()){
            cin.ignore(10,'\n');
            break;
        }
        cin.clear();
        cout<< "Incorrect input entered.";
        cin.ignore(10,'\n');

    }
    cout<<"Number entered is"<<x<<endl;
    return 0;
}