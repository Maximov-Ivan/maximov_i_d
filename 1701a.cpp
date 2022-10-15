#include <iostream>

int main() {
    int t = 0;
    int a = 0;
    int b = 0;
    int c = 0;
    int d = 0;
    std::cin >> t;
    for (int iT = 0; iT < t; iT += 1) {
        std::cin >> a >> b >> c >> d;
        if (a + b + c + d == 0) {
            std::cout << 0 << "\n";
        } else if (a + b + c + d == 4) {
            std::cout << 2 << "\n";
        } else {
            std::cout << 1 << "\n";
        }
    }
}
