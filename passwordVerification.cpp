#include <iostream>
#include <cctype> // For isdigit function
using namespace std;

int main() {
    string username, password;
    cin >> username >> password; // Input for username and password

    if (password.length() < 6) { // Check if password length is less than 6
        cout << "Too short!" << endl;
        return 0;
    }

    // Loop through each character of password to check for a digit
    for (int i = 0; i < password.length(); i++) {
        if (isdigit(password[i])) { // If we find a digit
            cout << "Correct" << endl; // Print success and exit
            return 0;
        }
    }

    cout << "No digit!" << endl; // If no digit is found
    return 0;
}

// #include <iostream>
// #include <cctype> // For isdigit function
// using namespace std;

// int main() {
//     string username, password;
//     cin >> username >> password; // Input for username and password

//     try {
//         if (password.length() < 6) { // Check if password length is less than 6
//             throw "Too short!"; // If yes, throw an exception with message
//         }

//         bool hasDigit = false; // Flag to check if password has a digit
//         for (char c : password) { // Loop through each character of password
//             if (isdigit(c)) { // Check if the character is a digit
//                 hasDigit = true; // Set flag to true if a digit is found
//                 break; // No need to check further if we already found a digit
//             }
//         }

//         if (!hasDigit) { // If no digit was found
//             throw "No digit!"; // Throw an exception with message
//         }

//         cout << "Correct" << endl; // If no exceptions were thrown, print "Correct"
//     }
//     catch (const char* msg) { // Catch the exception and print the error message
//         cout << msg << endl;
//     }

//     return 0;
// }
