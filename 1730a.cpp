#include <iostream>
#include <map>

int main() {
    int t = 0;
    std::cin >> t;
    std::map <int, int> m;
    for (int iT = 0; iT < t; ++iT) {
        int n = 0;
        int c = 0;
        std::cin >> n >> c;
        for (int iN = 0; iN < n; ++iN) {
            int a;
            std::cin >> a;
            m[a] += 1;
        }
        int cost = 0;
        for (auto elem : m) {
            if (elem.second > c) {
                cost += c;
            } else {
                cost += elem.second;
            }
        }
        std::cout << cost << "\n";
        m.clear();
    }
}
