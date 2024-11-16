#include <iostream>
#include <string>
using namespace std;

int main() {
    string sentence;
    cout << "Enter the sentence: ";
    getline(cin, sentence);

    string result;
    string lastWord;
    
    for (int i = 0; i < sentence.length(); i++) {
        if (sentence[i] == ' ') {
            if (!lastWord.empty()) {
                result += lastWord[0]; // Add first letter of the word
                result += ". ";
                lastWord = "";
            }
        } else {
            lastWord += sentence[i];
        }
    }

    // Append the last word in full
    result += lastWord;

    cout << "Output: " << result << endl;

    return 0;
}
