#include <iostream>
#include <vector>

std::vector<int> removeEvens(std::vector<int> list) {
    std::vector<int> odds;
    for (int n : list) {
        if (n % 2 != 0) {
            odds.push_back(n);
        }
    }
    return odds;
}

int main() {
    std::vector<int> numbers = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    std::vector<int> onlyOdds = removeEvens(numbers);

    std::cout << "Original list: ";
    for (int n : numbers) {
        std::cout << n << " ";
    }

    std::cout << "\nList after removing evens (Odds only): ";
    for (int n : onlyOdds) {
        std::cout << n << " ";
    }
    std::cout << std::endl;

    return 0;
}
