#include <iostream>
#include <vector>
#include <numeric>

int sumList(std::vector<int> list) {
    return std::accumulate(list.begin(), list.end(), 0);
}

int main() {
    std::vector<int> myNumbers = {5, 10, 15, 20, 25};

    int total = sumList(myNumbers);

    std::cout << "Numbers in the list: ";
    for (int n : myNumbers) {
        std::cout << n << " ";
    }

    std::cout << "\n\nThe total sum is: " << total << std::endl;

    return 0;
}
