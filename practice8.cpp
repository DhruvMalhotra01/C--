#include<iostream>
#include<cstring>
using namespace std;
int main(){
    char language[10]= {'E','n','g','l','i'};
    char lan2[] = "spanshi";
    cout<<"first = "<<language<<endl;
    cout<<"second ="<<lan2<<endl;
    strcpy(language,lan2);
    cout<<"after"<<language<<endl;
    strcat(language,lan2);
    cout<<"strcat(language,lan2)="<<language<<endl;
    int lenght;
    lenght  = strlen(language);
    cout<<"lenght="<<lenght<<endl;
    return 0;

}