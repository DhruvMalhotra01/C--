#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int score;

public:
    void getdata() {
        cout << "Enter name of student: ";
        cin >> name;
        cout << "Enter score of student: ";
        cin >> score;
    }

    void putdata() {
        cout << "Name: " << name << endl;
        cout << "Score: " << score << endl;
    }
};

int main() {
    int size;
    cout << "Enter number of students: ";
    cin >> size;

    Student students[size];

    for (int i = 0; i < size; i++) {
        cout << "Enter details of student " << i + 1 << endl;
        students[i].getdata();
    }

    cout << endl;

    for (int i = 0; i < size; i++) {
        cout << "Details of student " << i + 1 << endl;
        students[i].putdata();
    }

    return 0;
}