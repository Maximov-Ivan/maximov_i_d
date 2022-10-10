#include <iostream>
#include <vector>
#include <cmath>

int main() {
    int t = 0;
    int n = 0;
    int a = 0;
    int ans = 0;
    std::cin >> t;
    for (int iT = 0; iT < t; iT += 1) {
        std::cin >> n >> ans;
        for (int iN = 1; iN < n; iN += 1) {
            std::cin >> a;
            ans &= a;
        }
        std::cout << ans << "\n";
    }
}
