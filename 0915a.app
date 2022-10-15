#include <iostream>

int main() {
    int n = 0;
    int k = 0;
    int a = 0;
    int ans = 1e9;
    std::cin >> n >> k;
    for (int iN = 0; iN < n; iN += 1) {
        std::cin >> a;
        if (k % a == 0 && k / a < ans) {
            ans = k / a;
        }
    }
    std::cout << ans;
}
