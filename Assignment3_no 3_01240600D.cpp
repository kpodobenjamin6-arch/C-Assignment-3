#include <iostream>
#include <vector>
#include <numeric>

double getAverage(std::vector<int> list) {
    if (list.empty()) return 0;

    double sum = std::accumulate(list.begin(), list.end(), 0);

    return sum / list.size();
}

int main() {
    std::vector<int> myNumbers = {10, 20, 30, 40, 50};

    double average = getAverage(myNumbers);

    std::cout << "Numbers in list: ";
    for (int n : myNumbers) {
        std::cout << n << " ";
    }

    std::cout << "\n\nThe average is: " << average << std::endl;

    return 0;
}
