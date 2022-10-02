#include <iostream>
#include <cmath>

double summ(double& x, double& eps) {
    double e = 1; // элемент, первый элемент равен 1
    double s = 1; // сумма, начальная сумма равна первому элементу
    int i = 0; // индекс
    while (std::abs(e) > eps) {
        i += 1;
        e *= (-1) * x * x / (2 * i - 1) / (2 * i);
        s += e;
    }
    return s;
}

int main() {
    double a = -1;
    double b = 1;
    double delta = 0.1;
    double eps = 0.001;
    for (double x = a; x <= b; x += delta) {
        double s = summ(x, eps);
        double f = cos(x);
        std::cout.precision(1);
        std::cout.width(10);
        std::cout << x;
        std::cout << ' ';
        std::cout.precision(7);
        std::cout.width(10);
        std::cout << s;
        std::cout << ' ';
        std::cout.precision(7);
        std::cout.width(10);
        std::cout << f;
        std::cout << "\n";
    }
}
