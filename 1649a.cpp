#include <iostream>
#include <vector>

int main() {
    int t = 0;
    int n = 0;
    std::vector <int> a;
    std::cin >> t;
    for (int iT = 0; iT < t; iT += 1) {
        std::cin >> n;
        a.resize(n);
        for (int iN = 0; iN < n; iN += 1) {
            std::cin >> a[iN];
        }
        int l = 0;
        int r = n - 1;
        while (l + 1 < n && a[l + 1] == 1) {
            l += 1;
        }
        while (l < r && a[r - 1] == 1) {
            r -= 1;
        }
        std::cout << r - l << "\n";
    }
}
