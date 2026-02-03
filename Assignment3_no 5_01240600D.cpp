#include <iostream>
#include <vector>
#include <string>

std::string getLongestString(std::vector<std::string> list) {
    if (list.empty()) return "";

    std::string longest = list[0];

    for (const std::string& s : list) {
        if (s.length() > longest.length()) {
            longest = s;
        }
    }

    return longest;
}

int main() {
    std::vector<std::string> programmingLanguages = {
        "C++",
        "Python",
        "JavaScript",
        "Rust",
        "Go"
    };

    std::string result = getLongestString(programmingLanguages);

    std::cout << "List of words: ";
    for (const std::string& str : programmingLanguages) {
        std::cout << "[" << str << "] ";
    }

    std::cout << "\n\nThe longest string is: " << result << std::endl;
    std::cout << "Its length is: " << result.length() << " characters." << std::endl;

    return 0;
}
