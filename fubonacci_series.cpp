#include <iostream>

int main() {
    int n;
    std::cout << "Enter the number of terms: ";
    std::cin >> n;

    int first = 0, second = 1;
    std::cout << "Fibonacci series up to " << n << " terms: ";

    for (int i = 0; i < n; ++i) {
        std::cout << first << " ";
        int next = first + second;
        first = second;
        second = next;
    }

    return 0;
}