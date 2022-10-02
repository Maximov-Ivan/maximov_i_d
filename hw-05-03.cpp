// код
#include <iostream>
#include <cmath>

const double e = std::numbers::e;
//const double e = 2.718281828459045;

double summ(double& x, double& eps) {
    int i = 0; // индекс
    double el = 1; // элемент
    double s = el; // сумма
    while (std::abs(el) > eps) {
        i += 1;
        el *= 2 * x / i;
        s += el;
    }
    return s;
}

int main() {
    double a = 0;
    double b = 1;
    double delta = 0.1;
    double eps = 0.0001;
    std::cout.width(10);
    std::cout << "x";
    std::cout << " |";
    std::cout.width(10);
    std::cout << "s(x)";
    std::cout << " |";
    std::cout.width(10);
    std::cout << "f(x)";
    std::cout << "\n";
    for (double x = a; x <= b; x += delta) {
        double s = summ(x, eps);
        double f = std::pow(e, 2 * x);
        std::cout.precision(1);
        std::cout.width(10);
        std::cout << x;
        std::cout << " |";
        std::cout.precision(7);
        std::cout.width(10);
        std::cout << s;
        std::cout << " |";
        std::cout.precision(7);
        std::cout.width(10);
        std::cout << f;
        std::cout << "\n";
    }
}

// таблица
/*
         x |      s(x) |      f(x)
         0 |         1 |         1
       0.1 |    1.2214 |  1.221403
       0.2 |  1.491819 |  1.491825
       0.3 |  1.822113 |  1.822119
       0.4 |  2.225536 |  2.225541
       0.5 |  2.718279 |  2.718282
       0.6 |  3.320115 |  3.320117
       0.7 |  4.055191 |    4.0552
       0.8 |  4.953027 |  4.953032
       0.9 |  6.049629 |  6.049647
         1 |  7.389046 |  7.389056
*/
