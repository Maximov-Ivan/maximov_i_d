#include <iostream>
#include <cmath>

int main() {
    int t = 0;
    std::cin >> t;
    for (int iT = 0; iT < t; iT += 1) {
        int n = 0;
        char c = 0;
        std::string s;
        std::cin >> n >> c >> s;
        s = s + s;
        int curr_time = -1;
        int max_time = 0;
        for (int iN = 0; iN < 2 * n; iN += 1) {
            if (s[iN] == c && curr_time == -1) {
                curr_time = 0;
            }
            if (s[iN] == 'g') {
                max_time = std::max(curr_time, max_time);
                curr_time = -1;
            } else if (curr_time != -1) {
                curr_time += 1;
            }
        }
        std::cout << max_time << "\n";
    }
}
