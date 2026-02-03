#include <iostream>
#include <string>
#include <cctype>

int countVowels(std::string str) {
    int count = 0;
    std::string vowels = "aeiouAEIOU";
    for (char c : str) {

        if (vowels.find(c) != std::string::npos) {
            count++;
        }
    }
    return count;
}

int main() {
    std::string userInput;

    std::cout << "Enter a string or sentence: ";
    std::getline(std::cin, userInput);

    int totalVowels = countVowels(userInput);

    std::cout << "Total number of vowels: " << totalVowels << std::endl;

    return 0;
}
