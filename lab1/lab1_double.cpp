#include <iostream>
#include <cmath>
#include <iomanip>
#include <clocale>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    // Ввод исходных данных
    double a, b;
    cout << "Введите a: ";
    cin >> a;
    cout << "Введите b: ";
    cin >> b;

    // Промежуточные переменные
    double a2 = pow(a, 2);
    double a3 = pow(a, 3);
    double b2 = pow(b, 2);
    double b3 = pow(b, 3);
    double a_plus_b = a + b;
    double a_plus_b_3 = pow(a_plus_b, 3);

    // Числитель и знаменатель
    double numerator = a_plus_b_3 - a3;
    double denominator = 3 * a * b2 + b3 + 3 * a2 * b;

    // Результат
    double result = numerator / denominator;

    // Вывод всех промежуточных значений
    cout << setprecision(15);
    cout << "\n=== Промежуточные значения (double) ===\n";
    cout << "a^3              = " << a3           << endl;
    cout << "(a+b)^3          = " << a_plus_b_3   << endl;
    cout << "(a+b)^3 - a^3    = " << numerator    << endl;
    cout << "3ab^2 + b^3+3a^2b= " << denominator  << endl;
    cout << "Результат        = " << result       << endl;

    return 0;
}