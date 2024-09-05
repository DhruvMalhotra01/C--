#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char name1[100], name2[100];
    int count = 0;

    // Take input for two names
    cout << "Enter first name: ";
    cin.getline(name1, 100);
    cout << "Enter second name: ";
    cin.getline(name2, 100);

    // Convert to lowercase for case-insensitive comparison
    for (int i = 0; i < strlen(name1); i++) {
        name1[i] = tolower(name1[i]);
    }
    for (int i = 0; i < strlen(name2); i++) {
        name2[i] = tolower(name2[i]);
    }

    // Count common letters
    for (int i = 0; i < strlen(name1); i++) {
        for (int j = 0; j < strlen(name2); j++) {
            if (name1[i] == name2[j]) {
                count++;
                // Remove the matched character from name2 to avoid duplicates
                name2[j] = '\0';
                break;
            }
        }
    }

    cout << "Common letters: " << count << endl;

    return 0;
}