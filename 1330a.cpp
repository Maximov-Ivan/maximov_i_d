#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int t = 0;
    int n = 0;
    int x = 0;
    int a = 0;
    int p = 0;
    std::vector <int> v, ans;
    std::cin >> t;
    for (int q = 0; q < t; q += 1) {
        std::cin >> n >> x;
        v.clear();
        v.push_back(0);
        for (int i = 0; i < n; i += 1) {
            std::cin >> a;
            v.push_back(a);
        }
        std::sort(v.begin(), v.end());
        p = 1;
        while (p <= n && x + 1 >= v[p]) {
            if (v[p] != v[p - 1]) {
                x += 1;
            }
            p += 1;
        }
        ans.push_back(x);
    }
    for (int i = 0; i < t; i += 1) {
        std::cout << ans[i] << "\n";
    }
}
