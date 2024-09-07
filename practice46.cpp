#include<bits/stdc++.h>
using namespace std;
int total;
int Square(int x)
{
    return x * x;
}
int SquareOfSum(int x,int y)
{
    int z = Square(x+y);
    return z;
}
int main(){
    int a = 4,b=8;
    total = SquareOfSum(a,b);
    printf("%d",total);


    //stock overflow
}