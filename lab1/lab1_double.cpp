#include <iostream>
#include <cmath>  
#include <iomanip>
#include <clocale> 
using namespace std;
int main() {
    setlocale(LC_ALL, "Russian");
    // ===== ВВОД =====
    double a, b;
    std::cout << "Введите a: ";
    std::cin >> a;
    std::cout << "Введите b : ";
    std::cin >> b;

    // ===== ПРОМЕЖУТОЧНЫЕ ПЕРЕМЕННЫЕ =====
    double a2 = pow(a, 2);              // a^2
    double a3 = pow(a, 3);              // a^3
    double b2 = pow(b, 2);              // b^2
    double b3 = pow(b, 3);              // b^3
    double a_plus_b = a + b;            // (a + b)
    double a_plus_b_3 = pow(a_plus_b, 3); // (a + b)^3

    // ===== ЧИСЛИТЕЛЬ И ЗНАМЕНАТЕЛЬ =====
    double numerator = a_plus_b_3 - a3;
    // числитель: (a+b)^3 - a^3

    double denominator = 3 * a * b2 + b3 + 3 * a2 * b;
    // знаменатель: 3ab^2 + b^3 + 3a^2b

    // ===== РЕЗУЛЬТАТ =====
    double result = numerator / denominator;

    // ===== ВЫВОД =====
    std::cout << std::setprecision(15) << "Результат: " << result << std::endl;

    return 0;
}