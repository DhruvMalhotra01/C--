#include <iostream>
#include <fstream>  

int main() {
    std::ofstream myFile("output.txt");  

    if (myFile.is_open()) { 
        myFile << "This is a single line written to the file.";  
        myFile.close();  
        std::cout << "File created and input written successfully!" << std::endl;
    } else {
        std::cout << "Unable to open file." << std::endl;
    }

    return 0;
}
