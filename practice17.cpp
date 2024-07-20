#include<iostream>
using namespace std;
class Demo{
    int x;
    public:
        void set_data(int a){x=a;}
        int getdata(){
            ++x;
            return x;
        }
};

int main(){
    Demo d;
    d.set_data(10);
    cout<<d.getdata();
    return 0;
}