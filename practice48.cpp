#include<bits/stdc++.h>
int main(){
    int *p;
    p = new int ;
    *p = 10 ;
    delete p;
    p = new int[20];
    p[0]  = 10;
    p[1] = 20;
    *p = 11;
    *(p+1) = 21;
    delete p;
    printf("%d",p);
}