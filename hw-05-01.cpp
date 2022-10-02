// код
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
        double f = cos(x);
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
        -1 | 0.5403026 | 0.5403023
      -0.9 | 0.6215994 |   0.62161
      -0.8 | 0.6967026 | 0.6967067
      -0.7 | 0.7648408 | 0.7648422
      -0.6 | 0.8253352 | 0.8253356
      -0.5 | 0.8775825 | 0.8775826
      -0.4 |  0.921061 |  0.921061
      -0.3 | 0.9553375 | 0.9553365
      -0.2 | 0.9800667 | 0.9800666
      -0.1 | 0.9950042 | 0.9950042
   -1e-016 |         1 |         1
       0.1 | 0.9950042 | 0.9950042
       0.2 | 0.9800667 | 0.9800666
       0.3 | 0.9553375 | 0.9553365
       0.4 |  0.921061 |  0.921061
       0.5 | 0.8775825 | 0.8775826
       0.6 | 0.8253352 | 0.8253356
       0.7 | 0.7648408 | 0.7648422
       0.8 | 0.6967026 | 0.6967067
       0.9 | 0.6215994 |   0.62161
         1 | 0.5403026 | 0.5403023
*/
