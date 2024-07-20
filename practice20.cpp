#include<iostream>
using namespace std;
class base{
    private:
        int private_variables;
    protected:
        int protected_variables;
    public:
        base()
        {
            private_variables = 10;
            protected_variables = 99;
        }
         void friendFunction(base&obj){
            cout<<"Private variable"<<obj.private_variables<<endl;
            cout<<"Protected variable:"<<obj.protected_variables<<endl;
         }
        
};
int main()
        {
            base object1;
            friendFunction(object1);
            return 0;



        }
