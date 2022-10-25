#include <iostream>
#include <cmath>

int main() {
    int t = 0;
    std::cin >> t;
    for (int iT = 0; iT < t; iT += 1) {
        int n = 0;
        std::cin >> n;
        int cnt_2 = 0;
        int a = 0;
        for (int iN = 0; iN < n; iN += 1) {
            std::cin >> a;
            while (a % 2 == 0) {
                a /= 2;
                cnt_2 += 1;
            }
        }
        if (cnt_2 >= n) {
            std::cout << 0 << "\n";
            continue;
        }
        int div_2 = 1;
        int pow_2 = 0;
        while (div_2 * 2 <= n) {
            div_2 *= 2;
            pow_2 += 1;
        }
        int ans = 0;
        bool fl = false;
        for (pow_2; pow_2 > 0; pow_2 -= 1) {
            if (cnt_2 + pow_2 * (n / div_2 - n / (2 * div_2)) >= n) {
                ans += (n - cnt_2 - 1) / pow_2 + 1;
                fl = true;
                break;
            } else {
                cnt_2 += pow_2 * (n / div_2 - n / (2 * div_2));
                ans += n / div_2 - n / (2 * div_2);
                div_2 /= 2;
            }
        }
        if (fl) {
            std::cout << ans << "\n";
        } else {
            std::cout << -1 << "\n";
        }
    }
}
