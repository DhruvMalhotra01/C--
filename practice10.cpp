#include<iostream>
#include<string>
#include<sstream>

using namespace std;
int main()
{
    string StringVal;
    float price =0.0;
    int qty = 0;
    cout<<"Enter price:";
    getline(cin,StringVal);
    stringstream(StringVal)>>price;//extracting the input and storing in the price variable
    cout<<"Enter QUALITY:";
    getline(cin,StringVal);
    stringstream(StringVal)>>qty;//extracting the input and storing in the quantity variable
    cout<< "Total price: "<< price*qty<<endl;
    return 0;

}