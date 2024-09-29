#include<iostream>
using namespace std;

class add{
    public:
    int a, b;
    void getdata(){
        cout << "Enter the value of a: ";
        cin >> a;
        cout << "Enter the value of b: ";
        cin >> b;
    }
};

class sub{
    public: 
    int a1, b1;
    void getdata(){
        cout << "Enter the value of a1: ";
        cin >> a1;
        cout << "Enter the value of b1: ";
        cin >> b1;
    }
};

class mul{
    public:
    int a2, b2;
    void getdata(){
        cout << "Enter the value of a2: ";
        cin >> a2;
        cout << "Enter the value of b2: ";
        cin >> b2;
    }
};

class divi{
    public:
    int a3, b3;
    void getdata(){
        cout << "Enter the value of a3: ";
        cin >> a3;
        cout << "Enter the value of b3: ";
        cin >> b3;
    }
};

class arithmetic : public add, public sub, public mul, public divi{
    public:
    void calculation(){
        // Using data members from each class for correct operations
        cout << "Sum: " << a + b << endl;        // Using data from class add
        cout << "Subtraction: " << a1 - b1 << endl; // Using data from class sub
        cout << "Multiplication: " << a2 * b2 << endl; // Using data from class mul
        
        // Avoid division by zero
        if(b3 != 0)
            cout << "Division: " << a3 / b3 << endl; // Using data from class divi
        else
            cout << "Error: Division by zero!" << endl;
    }
};

int main(){
    arithmetic obj;
    obj.add::getdata();   // Getting data for addition
    obj.sub::getdata();   // Getting data for subtraction
    obj.mul::getdata();   // Getting data for multiplication
    obj.divi::getdata();  // Getting data for division
    
    obj.calculation();    // Performing calculations
    return 0;
}
