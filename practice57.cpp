#include<iostream>
#include<cstring>
using namespace std;
bool isRepeated(string name,int index){
    for(int i=0;i<index;i++){
        if(name[i]==name[index]){
            return false;
        }
    }
    return true;
}
int main(){
    string yourName,friendName;
    cout<<"Enter your name: ";
    getline(cin,yourName);
    cout<<"Enter your friend name:";
    getline(cin,friendName);
    cout<<"Common characters:";
    for(int i=0;i<yourName.length();i++){
        if(isRepeated(yourName,i)){
            for(int j= 0; j < friendName.length();j++){
                if(yourName[i] == friendName[j]){
                    cout<<yourName[i]<<" ";
                    break;
                }
            }
    }
    }
    return 0;
}