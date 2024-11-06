#include<iostream>
#include<string>
using namespace std;
class Patient{
    public:
    string name;
    int age;
    string address;

    void PatientCallIntroduction(){
        cout<<"Hi ${name} Welcome To A.K. Hospital"<<endl;
    }
    void PatientCallForPrescription(){
       cout<<name<<"Your Prescription is Ready"<<endl;
    }
    void PatientDectorSelect(){
        cout<<name<<"Choose Doctor according to your problem!!!"; 
    }
    };

//class patient
//derived medicine name and costing
//class record 

// welcome to Ak Hospital
//int main()
//login
//display menu
//display table












//example
// C++ program to illustrate how create a simple class and
// object
// #include <iostream>
// #include <string>

// using namespace std;

// // Define a class named 'Person'
// class Person {
// public:
//     // Data members
//     string name;
//     int age;

//     // Member function to introduce the person
//     void introduce()
//     {
//         cout << "Hi, my name is " << name << " and I am "
//              << age << " years old." << endl;
//     }
// };

// int main()
// {
//     // Create an object of the Person class
//     Person person1;

//     // accessing data members
//     person1.name = "Alice";
//     person1.age = 30;

//     // Call the introduce member method
//     person1.introduce();

//     return 0;
// }