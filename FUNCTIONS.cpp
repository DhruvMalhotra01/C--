#include<iostream>
// parameters of a function
using namespace std;

void starline(){
    for(int i=0;i<40;i++)
        cout<<'*';
    cout<<endl;
}
void customline(char,int);
int main(){
    // starline();
    customline('-', 30);
    cout<<"Gas           Price \n";
    // starline();
    customline('-', 30);
    cout<<"Unleaded $4.58"<<endl
        <<"Premium $6.15"<<endl
        <<"Diesel $5.73"<<endl;
    // starline();
    return 0;
}
void customline(char myChar,int i){
    for(int n=0;n<40;n++)
        cout<<myChar;
    cout<<endl;
}