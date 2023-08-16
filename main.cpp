#include "Password.h"
#include "PasswordAnalyzer.h"
#include <iostream>
#include <string>

int main() {
    std::string userInput;
    char repeat = 'Y';

    while (repeat == 'Y' || repeat == 'y') {
        std::cout << "Please enter a password to check: ";
        std::getline(std::cin, userInput);
        
        try {
            if(userInput.empty()) {
                throw std::runtime_error("Password can't be empty");
            }
            
            Password pwd(userInput);
            PasswordAnalyzer analyzer(pwd);

            std::cout << "Password score: " << analyzer.score() << "/100\n";
            std::cout << analyzer.feedback();
        } catch (const std::runtime_error& e) {
            std::cout << "Error: " << e.what() << std::endl;
        }

        std::cout << "Would you like to enter another password? (Y/N): ";
        std::cin >> repeat;
        std::cin.ignore();  // Clear out newline character for next input.
    }

    return 0;
}
