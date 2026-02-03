#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

std::vector<std::string> reverseStrings(std::vector<std::string> list) {
    for (std::string& s : list) {
        std::reverse(s.begin(), s.end());
    }
    return list;
}

int main() {
    std::vector<std::string> words = {"Apple", "Ghana", "Coding", "Gemini"};

    std::vector<std::string> reversedWords = reverseStrings(words);

    std::cout << "Original words: ";
    for (const std::string& w : words) {
        std::cout << w << " ";
    }

    std::cout << "\nReversed words: ";
    for (const std::string& rw : reversedWords) {
        std::cout << rw << " ";
    }
    std::cout << std::endl;

    return 0;
}
