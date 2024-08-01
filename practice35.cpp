//array size and element input & find the position of matrix 
#include <iostream>
using namespace std;

class Matrix {
    private:
        int size;
        int **matrix;

    public:
        // Constructor to initialize the matrix
        Matrix(int size) {
            this->size = size;
            matrix = new int*[size];
            for (int i = 0; i < size; i++) {
                matrix[i] = new int[size];
            }
        }

        // Destructor to free the memory
        ~Matrix() {
            for (int i = 0; i < size; i++) {
                delete[] matrix[i];
            }
            delete[] matrix;
        }

        // Function to take input of matrix elements
        void inputMatrix() {
            cout << "Enter the elements of the matrix:\n";
            for (int i = 0; i < size; i++) {
                for (int j = 0; j < size; j++) {
                    cin >> matrix[i][j];
                }
            }
        }

        // Function to find the position of an element in the matrix
        void findPosition(int element) {
            bool found = false;
            for (int i = 0; i < size; i++) {
                for (int j = 0; j < size; j++) {
                    if (matrix[i][j] == element) {
                        cout << "Element " << element << " found at position (" << i + 1 << ", " << j + 1 << ")\n";
                        found = true;
                    }
                }
            }
            if (!found) {
                cout << "Element " << element << " not found in the matrix\n";
            }
        }

        // Function to print the matrix
        void printMatrix() {
            cout << "Matrix:\n";
            for (int i = 0; i < size; i++) {
                for (int j = 0; j < size; j++) {
                    cout << matrix[i][j] << " ";
                }
                cout << "\n";
            }
        }
};

int main() {
    int size;
    cout << "Enter the size of the square matrix: ";
    cin >> size;

    Matrix matrix(size);
    matrix.inputMatrix();
    matrix.printMatrix();

    int element;
    cout << "Enter the element to find its position: ";
    cin >> element;
    matrix.findPosition(element);

    return 0;
}