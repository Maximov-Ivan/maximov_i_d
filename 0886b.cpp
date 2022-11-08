#include <iostream>
#include <set>
#include <vector>

int main() {
    int n = 0;
    std::cin >> n;
    std::vector <int> a(n);
    for (int iN = 0; iN < n; ++iN) {
        std::cin >> a[iN];
    }
    std::set <int> s;
    int ans = 0;
    for (int iN = n - 1; iN >= 0; --iN) {
        if (s.find(a[iN]) == s.end()) {
            ans = a[iN];
            s.insert(a[iN]);
        }
    }
    std::cout << ans;
}
