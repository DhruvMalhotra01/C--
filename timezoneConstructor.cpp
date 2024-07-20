#include <iostream>
using namespace std;

class TimeZone {
private:
    int hours, min;
public:
    TimeZone(int a, int b) {
        hours = a;
        min = b;
    }
    void time1() {
        
    }
    /********
     void time2() {
        int c1 = hours + 10;
        int c2 = min + 30;
        cout << "Canada time: " << c1 << " hours " << c2 << " min";
    }
     void time3() {
        int c1 = hours + 10;
        int c2 = min + 30;
        cout << "Canada time: " << c1 << " hours " << c2 << " min";
    }
    *********/
};

int main() {
    TimeZone t(2, 3);
    t.time1();
    return 0;
}