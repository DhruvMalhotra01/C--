#include<istream>
#include<iostream>
#include<string>
using namespace std;
int main(int argc,char**argv){
    ifstream *file = new ifstream();
    files->open("SampleInput.txt",ios::in);
    if(Files->is open()){
        string data;
        getline(*files,data);
        while(!files->eof()){
            cout<<data<<endl;
        }
    }else{
        cerr<<"Unable to open file \n";
    }
    file->close();
    delete file;
    file = nullptr;
    return 0x0;
}   