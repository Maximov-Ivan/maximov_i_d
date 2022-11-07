#include <iostream>
#include <map>

int main() {
    int t = 0;
    std::cin >> t;
    std::map <int, std::pair <int, int> > m;
    for (int iT = 0; iT < t; ++iT) {
        int n = 0;
        int k = 0;
        std::cin >> n >> k;
        for (int iN = 0; iN < n; ++iN) {
            int a = 0;
            std::cin >> a;
            if (m.find(a) == m.end()) {
                m[a].first = iN;
                m[a].second = iN;
            } else {
                m[a].second = iN;
            }
        }
        for (int iK = 0; iK < k; ++iK) {
            int a = 0;
            int b = 0;
            std::cin >> a >> b;
            if (m.find(a) == m.end() || m.find(b) == m.end()) {
                std::cout << "NO\n";
            } else if (m[b].second < m[a].first) {
                std::cout << "NO\n";
            } else {
                std::cout << "YES\n";
            }
        }
        m.clear();
    }
}
