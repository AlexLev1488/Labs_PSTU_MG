#include <iostream>
#include <cmath>
#include <clocale>
using namespace std;

int main() {
    setlocale(LC_ALL, ".65001");

    double eps = 1e-4;      // заданная точность
    double a = 0.5;         // a1 = (1!)^2 / 2^(1^2) = 0.5
    double sum = 0.0;       // сумма ряда
    int n = 1;              // номер текущего члена

    // Цикл с предусловием: пока член не меньше точности
    while (fabs(a) >= eps) {
        sum += a;                                   // добавляем член в сумму
        n++;                                        // номер следующего члена
        a = a * (n * n) / pow(2.0, 2 * n - 1);      // рекуррентный переход
    }

    cout << "Сумма ряда с точностью 1e-4 = " << sum << endl;
    cout << "Просуммировано членов: " << n - 1 << endl;
    cout << "Первый отброшенный член: " << a << endl;

    return 0;
}