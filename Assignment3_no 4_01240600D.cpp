#include <iostream>
#include <string>

std::string removeVowels(std::string sentence) {
    std::string result = "";
    std::string vowels = "aeiouAEIOU";

    for (char c : sentence) {
        if (vowels.find(c) == std::string::npos) {
            result += c;
        }
    }
    return result;
}

int main() {
    std::string userInput;

    std::cout << "Enter a sentence to remove vowels: ";
    std::getline(std::cin, userInput);

    std::string filteredSentence = removeVowels(userInput);

    std::cout << "Original: " << userInput << std::endl;
    std::cout << "Without Vowels: " << filteredSentence << std::endl;

    return 0;
}
