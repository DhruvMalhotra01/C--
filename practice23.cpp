#include<iostream>
using namespace std;
int main(){
    char operand;
    float num1,num2;
    cout<<"Enter an operator(+, -, * ,/):";
    cin>>operand;
    cout<<"Enter two numbers:"<<endl;
    cin>>num1>>num2;
    switch(operand){
        case '+':
            cout<<"The sum is :"<<num1 + num2;
            break;
        case '-':
            cout<<"The difference is : "<<num1 - num2;
            break;
        case '*':
            cout<<"The product is : "<< num1 * num2;
            break;
        case '/':
            cout<<"The quotient is: "<<num1 / num2;
            break;
            default:
            cout<<"error bc";
    }
    return 0;
}