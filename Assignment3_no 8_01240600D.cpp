#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

std::vector<std::string> sortStrings(std::vector<std::string> list) {
    std::sort(list.begin(), list.end());
    return list;
}

int main() {
    std::vector<std::string> fruits = {"Banana", "Apple", "Elderberry", "Cherry", "Date"};

    std::vector<std::string> sortedFruits = sortStrings(fruits);

    std::cout << "Original list: ";
    for (const std::string& s : fruits) {
        std::cout << s << " ";
    }

    std::cout << "\nSorted list:   ";
    for (const std::string& s : sortedFruits) {
        std::cout << s << " ";
    }
    std::cout << std::endl;

    return 0;
}
