#include <iostream>
#include <cmath> 
using namespace std;

int main() {
    setlocale(0, "ru");
    double a, b, x, y;
    int choice;

    cout << "Введите коэффициент a: ";
    cin >> a;
    cout << "Введите коэффициент b: ";
    cin >> b;
    cout << "Введите значение x: ";
    cin >> x;

    cout << "Выберите функцию phi(x):" << endl;
    cout << "1. phi(x) = 2x" << endl;
    cout << "2. phi(x) = x^2" << endl;
    cout << "3. phi(x) = x / 3" << endl;
    cout << "Введите номер функции (1-3): ";
    cin >> choice;

    if (b < 0) {
        cout << "Коэффициент b должен быть положительным для вычисления ln(bx + 2.5)." << endl;
        return 1;
    }

    switch (choice) {
    case 1: 
        cout << "Используется функция: phi(x) = 2x" << endl;
        y = a * (2 * x) - log(b * x + 2.5);
        break;

    case 2: 
        cout << "Используется функция: phi(x) = x^2" << endl;
        y = a * (x * x) - log(b * x + 2.5);
        break;

    case 3: 
        cout << "Используется функция: phi(x) = x / 3" << endl;
        y = a * (x / 3) - log(b * x + 2.5);
        break;

    default:
        cout << "Некорректный выбор функции." << endl;
        return 1; 
    }

    cout << "Результат y: " << y << endl;

    return 0;
}
