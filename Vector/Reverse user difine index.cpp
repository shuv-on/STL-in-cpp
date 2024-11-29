#include <iostream>
#include <vector>
#include <algorithm> // For std::reverse

int main() {
    // Declare and initialize a vector
    std::vector<int> vec = {10, 20, 30, 40, 50, 60};

    int start = 1, end = 3; // User-defined indices (inclusive)

    std::cout << "Original Vector: ";
    for (int num : vec) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Reverse elements from index `start` to index `end`
    std::reverse(vec.begin() + start, vec.begin() + end + 1);

    std::cout << "Vector after reversing from index " << start << " to " << end << ": ";
    for (int num : vec) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
