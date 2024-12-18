#include <iostream>
#include <vector>

int main() {
    int size;
    std::cout << "Введите размер массива: ";
    std::cin >> size;
    std::cout << "Заполните массив: ";
    std::vector<int> elements(size);

    for (int index = 0; index < size; ++index) {
        std::cin >> elements[index];
    }

    int maxVal = elements[0];
    int minVal = elements[0];

    for (int val : elements) {
        if (val > maxVal) {
            maxVal = val;
        }
        if (val < minVal) {
            minVal = val;
        }
    }
    std::cout << "Результат: ";
    for (int& element : elements) {
        if (element != maxVal && element != minVal) {
            element = 0;
        }
        std::cout << element;
    }

    return 0;
}
