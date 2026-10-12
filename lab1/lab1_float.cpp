#include <iostream>
#include <cmath>  
#include <iomanip>
#include <clocale> 
using namespace std;
int main() {
    setlocale(LC_ALL, "Russian");
    // ===== ВВОД =====
    float a, b;
    std::cout << "Введите a: ";
    std::cin >> a;
    std::cout << "Введите b : ";
    std::cin >> b;

    // ===== ПРОМЕЖУТОЧНЫЕ ПЕРЕМЕННЫЕ =====
    float a2 = powf(a, 2);              // a^2
    float a3 = powf(a, 3);              // a^3
    float b2 = powf(b, 2);              // b^2
    float b3 = powf(b, 3);              // b^3
    float a_plus_b = a + b;            // (a + b)
    float a_plus_b_3 = powf(a_plus_b, 3); // (a + b)^3

    // ===== ЧИСЛИТЕЛЬ И ЗНАМЕНАТЕЛЬ =====
    float numerator = a_plus_b_3 - a3;
    // числитель: (a+b)^3 - a^3

    float denominator = 3 * a * b2 + b3 + 3 * a2 * b;
    // знаменатель: 3ab^2 + b^3 + 3a^2b

    // ===== РЕЗУЛЬТАТ =====
    float result = numerator / denominator;

    // ===== ВЫВОД =====
    std::cout << std::setprecision(15) << "Результат: " << result << std::endl;

    return 0;
}