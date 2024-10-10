#include<iostream>
#include<array>
using namespace std;
int main(){
    array<int, 5> arr = {2, 3 ,5 , 7, 11};
    array<string , 2> = {"a" ,"b"};
    for(auto it = arr.begin();it !=arr.end(); +it)
    cout<<"it"<<' ';
    cout<<'\n';

    for(auto s :str)
    cout<<s<<' ';
    cout<<'\n';
    cout<<"Size of array\"arr\" is:"<<arr.size()<<'\n';
    cout<<"Size of array\"str\" is:"<<str.size()<<'\n';

    cout<<"Maximum size of array \" array\" is: "<<arr.max_size() <<'\n';
    cout<<"Maximum size of array\" str \" is:"<<str.max_size() <<'\n';

    (arr.empty())?cout<<"Array is empty":cout<<"Array is not empty";    
    cout<<"Element at 3rd postionis = "<<arr[2]<<'\n';
    cout<<"Element at 5rd postionis = "<<arr[4]<<'\n';
    
    cout<<"Element at first  postionis = "<<arr.back()<<'\n';
    arr.fill(5);
    for(int &x:arr)
    cout<<x<<' ';cout<<x<<" ";
    cout<<'\n';
    array<int,5>ar1 = {5, 10 ,15, 20 ,25};
    array<int, 5> ar2 = (3,6,9,12,15);
    ar1.swap(ar2);

    for(int &i : ar1)
    cout<<i<<' ';
    cout<<'\n';
    for(int &j : ar2)
        cout<<'\n';
        return 0;

}