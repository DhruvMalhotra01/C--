// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
class Marks{
    public:      //Access Specifier
    
    int maths;
    int english;
    int chemistry;
    int physics;
    int it;
    
  
    
    int average(){
        return (maths+english+chemistry+physics+it)/5;
    }
    
    char grade(){
        if(maths>=35 && english>=35 && chemistry>=35 && physics>=35 && it>=35){
            return 'P';
        }else{
            return 'F';
        }
    }
};

int main() {
    // create a object of classes
    //Object Instantanious/creation
    
   Marks s1,s2,s3,s4,s5;
   s1.maths=95;
   s1.english=91;
   s1.chemistry=99;
   s1.physics=95;
   s1.it=85;
   s2.maths=33;
   s2.english=99;
   s2.chemistry=69;
   s2.physics=30;
   s2.it=45;
   s3.maths=63;
   s3.english=50;
   s3.chemistry=74;
   s3.physics=65;
   s3.it=40;
   s4.maths=50;
   s4.english=33;
   s4.chemistry=34;
   s4.physics=45;
   s4.it=40;
   s5.maths=80;
   s5.english=45;
   s5.chemistry=43;
   s5.physics=23;
   s5.it=50;
   cout<<"Result of s1 is "<<s1.average()<<" "<<s1.grade()<<endl;
    cout<<"Result of s2 is "<<s2.average()<<" "<<s2.grade()<<endl;
     cout<<"Result of s3 is "<<s3.average()<<" "<<s3.grade()<<endl;
      cout<<"Result of s4 is "<<s4.average()<<" "<<s4.grade()<<endl;
       cout<<"Result of s5 is "<<s5.average()<<" "<<s5.grade()<<endl;
  
   
    
  

    return 0;
}