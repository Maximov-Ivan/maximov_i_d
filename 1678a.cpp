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
        int cnt_0 = 0;
        int first_step = 1;
        for (int iN = 0; iN < n; iN += 1) {
            for (int jN = iN + 1; jN < n; jN += 1) {
                if (a[iN] == a[jN] && a[iN] != 0) {
                    first_step = 0;
                }
            }
            if (a[iN] == 0) {
                cnt_0 += 1;
                first_step = 0;
            }
        }
        std::cout << n - cnt_0 + first_step << "\n";
    }
}
