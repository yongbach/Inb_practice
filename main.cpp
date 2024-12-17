#include <iostream>
#include <cmath>

using namespace std;

void solveQuadratic(double a, double b, double c) {
    if (a == 0) {
        cout << "Нет рещений" << endl;
        return;
    }

    double discriminant = b * b - 4 * a * c;

    if (discriminant > 0) {
        double x1 = (-b + sqrt(discriminant)) / (2 * a);
        double x2 = (-b - sqrt(discriminant)) / (2 * a);
        cout << "Корни уравнения: x1 = " << x1 << ", x2 = " << x2 << endl;
    }
    else if (discriminant == 0) {
        double x = -b / (2 * a);
        cout << "Единственный корень уравнения: x = " << x << endl;
    }
    else {
        cout << "У уравнения нет действительных корней" << endl;
    }
}

int main() {
    double a, b, c;
    
    cout << "Введите коэффициенты a, b и c квадратного уравнения (ax^2 + bx + c = 0):" << endl;
    cout << "a = ";
    cin >> a;
    cout << "b = ";
    cin >> b;
    cout << "c = ";
    cin >> c;

    solveQuadratic(a, b, c);

    return 0;
}
