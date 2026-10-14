#include <iostream>
#include <cmath>
#include <iomanip>
#include <clocale>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    // Ввод исходных данных
    float a, b;
    cout << "Введите a: ";
    cin >> a;
    cout << "Введите b: ";
    cin >> b;

    // Промежуточные переменные
    float a2 = powf(a, 2);
    float a3 = powf(a, 3);
    float b2 = powf(b, 2);
    float b3 = powf(b, 3);
    float a_plus_b = a + b;
    float a_plus_b_3 = powf(a_plus_b, 3);

    // Числитель и знаменатель
    float numerator = a_plus_b_3 - a3;
    float denominator = 3 * a * b2 + b3 + 3 * a2 * b;

    // Результат
    float result = numerator / denominator;

    // Вывод всех промежуточных значений
    cout << setprecision(15);
    cout << "\n=== Промежуточные значения (float) ===\n";
    cout << "a^3              = " << a3           << endl;
    cout << "(a+b)^3          = " << a_plus_b_3   << endl;
    cout << "(a+b)^3 - a^3    = " << numerator    << endl;
    cout << "3ab^2 + b^3+3a^2b= " << denominator  << endl;
    cout << "Результат        = " << result       << endl;

    return 0;
}