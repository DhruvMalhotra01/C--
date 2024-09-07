#include<bits/stdc++.h>
using namespace std;
int main(){
    int *p;
    p = (int*)malloc(sizeof(int*20));
    p[0] = 10;
    p[1] = 20;
    *p = 11;
    *(p+1) = 21;
}