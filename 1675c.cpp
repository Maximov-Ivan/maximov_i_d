#include <iostream>

int main() {
    int t = 0;
    std::string s;
    int n = 0;
    std::cin >> t;
    for (int iT = 0; iT < t; iT += 1) {
        std::cin >> s;
        n = s.size();
        int last_1 = 0, first_0 = n - 1;
        for (int iN = 0; iN < n; iN += 1) {
            if (s[iN] == '1') {
                last_1 = iN;
            } else if (s[iN] == '0' && first_0 == n - 1) {
                first_0 = iN;
            }
        }
        std::cout << first_0 - last_1 + 1 << "\n";
    }
}
