#include <iostream>
#include <vector>
#include <unordered_map>

int findLuckyNumber(std::vector<int>& arr) {
    std::unordered_map<int, int> frequency;

    for (int num : arr) {
        frequency[num]++;
    }

    int luckyNumber = -1;

    for (const auto& pair : frequency) {
        if (pair.first == pair.second) {
            if (pair.first > luckyNumber) {
                luckyNumber = pair.first;
            }
        }
    }

    return luckyNumber;
}

int main() {
    std::vector<int> numbers = { 2, 2, 3, 4, 5, 5, 5, 7, 7, 7 };
    int result = findLuckyNumber(numbers);

    if (result == -1) {
        std::cout << "No lucky numbers found." << std::endl;
    }
    else {
        std::cout << "Lucky number: " << result << std::endl;
    }

    return 0;
}
