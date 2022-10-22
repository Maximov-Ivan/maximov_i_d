#include <iostream>
#include <cmath>

int main() {
    int t = 0;
    std::cin >> t;
    for (int iT = 0; iT < t; iT += 1) {
        int n = 0;
        int k = 0;
        std::string s;
        std::cin >> n >> k >> s;
        int white_num = 0;
        int black_num = 0;
        for (int iN = 0; iN < k; iN += 1) {
            if (s[iN] == 'W') {
                white_num += 1;
            } else {
                black_num += 1;
            }
        }
        int ans = white_num;
        for (int iN = k; iN < n; iN += 1) {
            if (s[iN] == 'W') {
                white_num += 1;
            } else {
                black_num += 1;
            }
            if (s[iN - k] == 'W') {
                white_num -= 1;
            } else {
                black_num -= 1;
            }
            ans = std::min(ans, white_num);
        }
        std::cout << ans << "\n";
    }
}
