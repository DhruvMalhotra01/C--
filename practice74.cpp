#include <iostream>
#include <string>
using namespace std;

int main() {
    string sentence;
    cout << "Enter the sentence: ";
    getline(cin, sentence);

    for (int i = 0; i < sentence.length(); i++) {
        // Check if the current character is the first letter of a word
        if (i == 0 || sentence[i - 1] == ' ') {
            if (sentence[i] >= 'a' && sentence[i] <= 'z') {
                sentence[i] -= 32; // Convert lowercase to uppercase
            }
        }
    }

    cout << "Capitalized Sentence: " << sentence << endl;
    return 0;
}
