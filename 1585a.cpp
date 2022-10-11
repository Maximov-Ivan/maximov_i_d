#include <iostream>
 
int main() {
    int t = 0;
    int n = 0;
    int a = 0;
    int b = 0;
    int ans = 0;
    std::cin >> t;
    for (int iT = 0; iT < t; iT += 1) {
        std::cin >> n >> a;
        if (a == 1) {
            ans = 2;
        } else {
            ans = 1;
        }
        for (int iN = 1; iN < n; iN += 1) {
            std::cin >> b;
            if (b == 1 && a == 1) {
                ans += 5;
            } else if (b == 0 && a == 0) {
                ans = -1000000;
            } else if (b == 1) {
                ans += 1;
            }
            a = b;
        }
        if (ans < 0) {
            std::cout << -1 << "\n";
        } else {
            std::cout << ans << "\n";
        }
    }
}
