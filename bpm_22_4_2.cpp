#include <iostream>

int main() {
    double x = 0.0;
    double y = 0.0;
    int cnt = 0;
    while (std::cin >> x >> y) {
        if (x * x + y * y <= 1 && (y - x >= 1 || x - y >= 1)) {
            cnt++;
        }
    }
    std::cout << cnt << std::endl;
}
