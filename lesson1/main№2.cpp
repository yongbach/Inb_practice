#include <iostream>
#include <vector>

void seerchDivisors(int number, std::vector<int>& divisors) {
    for (int candidate = 2; candidate <= number / 2; ++candidate) {
        if (number % candidate == 0) {
            divisors.push_back(candidate);
        }
    }
}

int main() {
    int number;
    std::cin >> number;

    std::vector<int> divisors;
    seerchDivisors(number, divisors);

    if (divisors.empty()) {
        std::cout << "Делители не найдены." << std::endl;
    } else {
        for (int divisor : divisors) {
            std::cout << divisor << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}