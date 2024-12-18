#include <iostream> 
#include <cmath>
int main(){
    int a,b,c;
    std::cout << "Ввдите а: ";
    std::cin >> a;
    std::cout << "Введите b: ";
    std::cin >> b;
    std::cout << "Введите с: ";
    std::cin >> c;
    int res = ((pow(a + 2 * b, 11)) - 5 * c) * 3;
    std::cout << "Ответ: " << res;
    return 0;
}