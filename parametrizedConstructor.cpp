#include<iostream>
using namespace std;
class TimeZone{
    private:
        int hours,mins;
    public:
        Rectangle(int a,int b){
            length = a;
            breadth = b;
        }
        int area(){
            x = length * breadth;
            return x;
        }
        void display(){
    cout<<"Area ="<<x<<endl;
    }
};
int main(){
    Rectangle c(2,4);
    c.area();
    c.display();
    return 0;
}
