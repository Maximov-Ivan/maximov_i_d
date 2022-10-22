#include <iostream>

int main() {
    int t = 0;
    std::cin >> t;
    for (int iT = 0; iT < t; iT += 1) {
        int n = 0;
        std::string s;
        std::cin >> n >> s;
        bool is_possible = true;
        int red_num = 0;
        int blue_num = 0;
        for (int iN = 0; iN < n; iN += 1) {
            if (s[iN] == 'W') {
                if (red_num == 0 && blue_num != 0 ||
                    red_num != 0 && blue_num == 0) {
                        is_possible = false;
                        break;
                    }
                red_num = 0;
                blue_num = 0;
            } else if (s[iN] == 'R') {
                red_num += 1;
            } else {
                blue_num += 1;
            }
        }
        if (red_num == 0 && blue_num != 0 ||
            red_num != 0 && blue_num == 0) {
                is_possible = false;
            }
        if (is_possible) {
            std::cout << "YES\n";
        } else {
            std::cout << "NO\n";
        }
    }
}
