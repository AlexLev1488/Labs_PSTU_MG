#include <iostream>
#include <clocale>
using namespace std;

int main() {
    setlocale(LC_ALL, ".65001");

    int n, m, r;
    int n0, m0;   // исходные значения

    cout << "Введите n: ";
    cin >> n;
    cout << "Введите m: ";
    cin >> m;

    n0 = n;       // сохраняем исходные
    m0 = m;

    // Выражение 1: n++ - m
    r = n++ - m;
    cout << "n++ - m = " << r << ", n = " << n << ", m = " << m << endl;

    // Сброс
    n = n0;
    m = m0;

    // Выражение 2: m-- > n
    r = m-- > n;
    cout << "m-- > n = " << r << ", n = " << n << ", m = " << m << endl;

    // Сброс
    n = n0;
    m = m0;

    // Выражение 3: n-- > m
    r = n-- > m;
    cout << "n-- > m = " << r << ", n = " << n << ", m = " << m << endl;

    return 0;
}