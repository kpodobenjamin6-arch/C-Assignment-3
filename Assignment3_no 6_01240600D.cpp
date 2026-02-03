#include <iostream>
#include <vector>
#include <algorithm>

double getMedian(std::vector<int> list) {
    if (list.empty()) return 0;

    std::sort(list.begin(), list.end());

    size_t size = list.size();

    if (size % 2 == 0) {
        return (list[size / 2 - 1] + list[size / 2]) / 2.0;
    }
    else {
        return list[size / 2];
    }
}

int main() {
    std::vector<int> oddList = {7, 1, 3};

    std::vector<int> evenList = {10, 2, 38, 23};

    std::cout << "Median of odd list {7, 1, 3}: " << getMedian(oddList) << std::endl;
    std::cout << "Median of even list {10, 2, 38, 23}: " << getMedian(evenList) << std::endl;

    return 0;
}
