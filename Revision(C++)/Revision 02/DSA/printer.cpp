#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib> // for system()

void printToPrinter(const std::string &text) {
    // Create a text file
    std::ofstream outFile("tempPrintFile.txt");
    if (outFile) {
        outFile << text;
        outFile.close();

            // Assuming a Unix-like system (Linux, macOS)
            std::string command = "lpr tempPrintFile.txt";
        // Execute the print command
        system(command.c_str());

        // Optionally delete the file after printing
        std::remove("tempPrintFile.txt");
    } else {
        std::cerr << "Error creating print file." << std::endl;
    }
}

int main() {
    std::string textToPrint;
    std::cout << "Enter text to print: ";
    std::getline(std::cin, textToPrint);

    printToPrinter(textToPrint);

    return 0;
}
