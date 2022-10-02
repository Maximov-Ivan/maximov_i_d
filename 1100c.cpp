#include <iostream>
#include <cmath>

int main() {
    double n = 0;
    double r = 0;
    std::cin >> n >> r;
    double a = std::numbers::pi / n;
    //double a = 3.141592653589793 / n; костыль для с++17
    double sin_a = sin(a);
    double R = r * sin_a / (1 - sin_a);
    std::cout.precision(7);
    std::cout << R;
}
