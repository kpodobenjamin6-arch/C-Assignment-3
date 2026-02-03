#include <iostream>
using namespace std;

int sumTwo(int x, int y) {
    return x + y;
}

int main() {

    int result = sumTwo(5, 10);
    cout << "The sum is: " << result << endl;

    return 0;
}
