//write a code in c++ enter the word count each vowels and totalo no of vowels
#include <iostream>
#include <string>
using namespace std;

// Function to count vowels
void countVowels(const string& str) {
    int vowelCounts[5] = {0}; // Initialize counts for each vowel (a, e, i, o, u)
    int totalVowels = 0;

    // Iterate over each character in the string
    for (char c : str) {
        switch (c) {
            case 'a':
            case 'A':
                vowelCounts[0]++;
                break;
            case 'e':
            case 'E':
                vowelCounts[1]++;
                break;
            case 'i':
            case 'I':
                vowelCounts[2]++;
                break;
            case 'o':
            case 'O':
                vowelCounts[3]++;
                break;
            case 'u':
            case 'U':
                vowelCounts[4]++;
                break;
        }
    }

    // Calculate total vowels
    for (int i = 0; i < 5; i++) {
        totalVowels += vowelCounts[i];
    }

    // Print vowel counts
    cout << "Vowel Counts:" << endl;
    cout << "A: " << vowelCounts[0] << endl;
    cout << "E: " << vowelCounts[1] << endl;
    cout << "I: " << vowelCounts[2] << endl;
    cout << "O: " << vowelCounts[3] << endl;
    cout << "U: " << vowelCounts[4] << endl;
    cout << "Total Vowels: " << totalVowels << endl;
}

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);

    countVowels(input);

    return 0;
}