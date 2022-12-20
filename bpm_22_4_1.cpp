#include <iostream>
#include <iomanip>

int main() {
    double x = 0.1;
    double eps = 1e-4;
    double dx = 0.05;
    while (x <= 1.0 + eps) {
        double s = 1.0;
        double e = 1.0;
        int i = 1;
        double pow_x = 1.0;
        int factorial = 1;
        while (e >= eps) {
            factorial *= (2 * i - 1) * (2 * i);
            pow_x *= x * x;
            e = pow_x / factorial;
            s += e;
            i += 1;
            //std::cout << pow_x << ' ' << factorial << ' ' << e << "\n";
        }
        std::cout << "X: " << x << ", sum: " << s << std::endl;
        x += dx;
    }
}
