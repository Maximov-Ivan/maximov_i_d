// код
#include <iostream>
#include <cmath>

const double pi = std::numbers::pi;
//const double pi = 3.141592653589793;

double summ(double& x, double& eps) {
    int i = 1; // индекс
    double e = x * sin(i * pi / 4); // элемент
    double p = x; // переменная для х в i степени
    double s = e; // сумма
    while (std::abs(e) > eps || i % 4 == 0) {
        i += 1;
        p *= x;
        e = p * sin(i * pi / 4);
        s += e;
    }
    return s;
}

int main() {
    double a = 0;
    double b = 1;
    double delta = 0.05;
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
        double f = (x * sin(pi / 4)) / (1 - 2 * x * cos(pi / 4));
        std::cout.precision(2);
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
         0 |         0 |         0
      0.05 |0.03794373 |0.03804557
       0.1 |0.08141778 |0.08235783
      0.15 | 0.1308988 | 0.1346241
       0.2 | 0.1868519 | 0.1971971
      0.25 | 0.2496347 | 0.2734591
       0.3 | 0.3187766 | 0.3684537
      0.35 | 0.3942975 | 0.4900495
       0.4 | 0.4757876 | 0.6512393
      0.45 | 0.5616741 | 0.8751228
       0.5 |  0.651053 |  1.207107
      0.55 | 0.7417947 |  1.750402
       0.6 | 0.8303785 |  2.800943
      0.65 | 0.9128214 |  5.691093
       0.7 | 0.9906393 |  49.24874
      0.75 |  1.055711 | -8.742641
       0.8 |  1.111295 | -4.306019
      0.85 |  1.154086 | -2.974249
       0.9 |   1.18324 | -2.332897
      0.95 |  1.200962 | -1.955592
*/
