#include <iostream>

int main() {
    int y = 0;
    int a = 0;
    int b = 0;
    int c = 0;
    int d = 0;
    std::cin >> y;
    for (y++; y < 10000; y += 1) {
        a = y / 1000;
        b = y / 100 % 10;
        c = y / 10 % 10;
        d = y % 10;
        if (a != b && a != c && a != d && b != c && b != d && c != d) {
            std::cout << y;
            break;
        }
    }
}
