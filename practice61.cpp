#include<iostream>
#include<fstream>
#include<iostream>
using namespace std;
int main(int argc, char**argv){
    // if(argc<3){
    //     cerr<<"usage:"<<<argv[0]<<"<filename><text>/n";
    //     return 0x1;
    // }
    ofstream*file = new ofstream();
    file->open("SampleOutput.txt,ios::out");//open file with out mode
    if(file->is open()){
        (*file)<<"Sample Output"<<endl;//deref the pointer and write into file
    }else{
        cerr<<"Faileed to open file\n";
    }
    file->close();
    delete file;
    file = nullptr;
    return 0x0; 
        000          

}