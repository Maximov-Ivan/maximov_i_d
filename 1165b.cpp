#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int n = 0;
    std::cin >> n;
    std::vector <int> a(n, 0);
    for (int iN = 0; iN < n; iN += 1) {
        std::cin >> a[iN];
    }
    std::sort(a.begin(), a.end());
    int k = 1;
    int ans = 0;
    for (int iN = 0; iN < n; iN += 1) {
        if (a[iN] >= k) {
            k += 1;
            ans += 1;
        }
    }
    std::cout << ans;
}
