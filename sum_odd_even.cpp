#include<iostream>
using namespace std;
int main()
{
    int sumOdd = 0;
    int sumEven = 0;
    int upperbound;
    int absDiff;

    upperbound = 10;

    int number = 1;
    while(number <= upperbound){
        if(number % 2 == 0){
            sumEven += number;
        }  else{
            sumOdd += number;
        }
        ++number;
    }
    if(sumOdd > sumEven){
        absDiff = sumOdd - sumEven;
    }else{
        absDiff = sumEven - sumOdd;
    }

    cout<<"the sum of odd number is "<<sumOdd<<endl;
    cout<<"The sum of even number is "<<sumEven<<endl;
    cout<<"The absolute difference is "<<absDiff<<endl;
}