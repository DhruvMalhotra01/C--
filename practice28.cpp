#include<iostream>
using namespace std;

class NUM {
private:
    int n;

public:
    void setNum(int x) {
        n = x;
    }

    void dispNum(void) {
        cout << "value of n is: " << n;
    }

    void operator-() {
        n = -n; // Corrected unary minus operator
    }

    void operator+() {
        // Unary plus operator (no change needed)
    }
};

int main() {
    NUM num;
    num.setNum(10);
    -num; // Calls num.operator-()
    num.dispNum(); // Display the updated value
    return 0;
}