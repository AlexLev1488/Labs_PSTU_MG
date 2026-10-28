#include <iostream>
#include <cmath>
#include <clocale>

using namespace std;

int main() {
    setlocale(LC_ALL, ".65001");

    double a = 0.1;       // начало диапазона
    double b = 1.0;       // конец диапазона
    int k = 10;           // количество шагов
    double step = (b - a) / k;
    
    int N = 30;           // заданное количество членов
    double eps = 0.0001;  // точность

    cout << "Вычисление функции" << endl;
    cout << "X\tSN\tSE\tY" << endl;

    // Внешний цикл по X
    for (double x = a; x <= b + 1e-9; x += step) {
        
        // 1. Вычисление SN (для заданного n=30)
        double SN = 0.0;
        double an = (x * x * x) / 3.0; // a1
        
        for (int n = 1; n <= N; n++) {
            SN += an;
            an = an * (-(4.0 * n * n - 1.0) / (4.0 * (n + 1) * (n + 1) - 1.0)) * (x * x);
        }

        // 2. Вычисление SE (для заданной точности eps)
        double SE = 0.0;
        an = (x * x * x) / 3.0; // снова берем a1
        int n_eps = 1;
        
        while (fabs(an) >= eps) {
            SE += an;
            an = an * (-(4.0 * n_eps * n_eps - 1.0) / (4.0 * (n_eps + 1) * (n_eps + 1) - 1.0)) * (x * x);
            n_eps++;
        }

        // 3. Точное значение Y
        double Y = ((1.0 + x * x) / 2.0) * atan(x) - (x / 2.0);

        // Вывод строки
        cout << x << "\t" << SN << "\t" << SE << "\t" << Y << endl;
    }

    return 0;
}