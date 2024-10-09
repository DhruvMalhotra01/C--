#include<iostream>
using namespace std;
int main(){
    int x = 5;
    int *p =&x;
    *p = 6;
    int **q = &p;
    int ***r = &q;
    printf("%d\n",*p);
    printf("%d")
}