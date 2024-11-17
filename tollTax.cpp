#include <iostream>
class TollBooth {
private:
 int totalCars;
 int totalCash;
public:
 TollBooth() : totalCars(0), totalCash(0) {}
 void payingCar() {
 totalCars++;
 totalCash += 50;
 }
 void nopayCar() {
 totalCars++;
 }
 void display() const {
 std::cout << "Total Cash : " << totalCash << "/-" << std::endl;
 std::cout << "Total Cars : " << totalCars << std::endl;
 }
};
int main() {
 TollBooth booth;
 char input;
Department of CSE Lab Manual: 22CS006-Object Oriented Programming in C - 3rdSem
12 DHRUV MALHOTRA
dhruv1732.be23@chitkara.edu.in
 while (true) {
 std::cin >> input;
 if (input == 'p') {
 booth.payingCar();
 } else if (input == 'n') {
 booth.nopayCar();
 } else if (input == 'q') {
 booth.display();
 break;
 } else {
 std::cout << "Invalid input. Please enter 'p', 'n', or 'q'." << std::endl;
 }
 }
 return 0;
}
Department of CSE L