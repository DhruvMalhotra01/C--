#include<iostream>
#include<cstring>
using namespace std;
// int main(){
//     void *ptr = NULL;
//     cout<<"The value of ptr is "<<ptr;
//     return 0;
// }
struct Student {
    int rollno;
    char name[20];
    float marks;
};
int main() {
    Student s1, *ptr;
    s1.rollno = 1;
    strcpy(s1.name,"Alice");
    s1.marks = 95.5;
    cout<<"Size o student structure: "<<sizeof(s1) << "bytes"<<endl;
    ptr = &s1;

    cout<<"Student details:"<<endl;
    cout<<"Roll no:"<<ptr->rollno << endl;  
    cout<<"Name:"<<ptr->name << endl;
    cout<<"Marks:"<<ptr->marks << endl;

    return 0;
}