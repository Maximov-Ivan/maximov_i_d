#include <iostream>
#include <cmath>

int main() {
    int t = 0;
    std::cin >> t;
    for (int iT = 0; iT < t; iT += 1) {
        int n = 0;
        int m = 0;
        std::cin >> n >> m;
        for (int iN = 0; iN < n; iN += 1) {
            for (int iM = 0; iM < m; iM += 1) {
                if (iN % 4 == 0 || iN % 4 == 3) {
                    if (iM % 4 == 0 || iM % 4 == 3) {
                        std::cout << 1 << ' ';
                    } else {
                        std::cout << 0 << ' ';
                    }
                } else {
                    if (iM % 4 == 0 || iM % 4 == 3) {
                        std::cout << 0 << ' ';
                    } else {
                        std::cout << 1 << ' ';
                    }
                }
            }
            std::cout << "\n";
        }
    }
}
