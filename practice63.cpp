#include<iostream>
#include<fstream>
using namespace std;
int main(){
    fstream file;
    file.open("my_file.txt",ios::out);
    string data;
    file>>data;
    if(!file.bad()){

        cout<<"Operation not sucess!!!"<<endl;  
        cout<<"status of the badbit:"<<file.bad()<<endl;
    }
    else{
        cout<<"Data read from file-"<<data<<endl;
    }
    return 0;
}