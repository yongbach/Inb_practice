#include <iostream>
#include <cmath>

int findMaxSquare(int lower, int upper) {
    int largestSquare = -1;
    for (int i = upper; i >= lower; --i) {
        int root = static_cast<int>(sqrt(i));
        if (root * root == i) {
            largestSquare = i;
            break;
        }
    }
    return largestSquare;
}

int main() {
    int lowerBound, upperBound;

    std::cout << "Введите два целых числа (нижняя и верхняя границы диапазона), через пробел: ";
    std::cin >> lowerBound >> upperBound;

    int maxSquareValue = findMaxSquare(lowerBound, upperBound);

    if (maxSquareValue != -1) {
        std::cout << "В диапазоне от " << lowerBound << " до " << upperBound << " максимальный квадратный корень: " << maxSquareValue << std::endl;
    } else {
        std::cout << "В диапазоне от " << lowerBound << " до " << upperBound << " нет квадратных чисел." << std::endl;
    }

    return 0;
}