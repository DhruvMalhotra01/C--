#include <iostream>
using namespace std;

class MyClass {
public:
    MyClass() {
        cout << "Constructor called" << endl;
    }
    void myFunction() {
        cout << "Hello from myFunction!" << endl;
    }
};

int main() {
    MyClass obj;

    obj.myFunction();

    return 0;
}