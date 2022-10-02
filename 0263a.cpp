#include <iostream>
#include <cmath>

int main() {
    int x = 0;
    int a = 0;
    for (int i = 0; i < 5; i += 1) {
        for (int j = 0; j < 5; j += 1) {
            std::cin >> x;
            if (x == 1) {
                a = std::abs(2 - i) + std::abs(2 - j);
            }
        }
    }
    std::cout << a;
}
