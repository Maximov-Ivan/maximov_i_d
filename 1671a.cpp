#include <iostream>
#include <string>

int main() {
    int t = 0;
    std::string s;
    std::cin >> t;
    for (int iT = 0; iT < t; iT += 1) {
        std::cin >> s;
        s += 'c';
        int cnt = 1;
        bool fl = true;
        for (int iS = 1; iS < s.size(); iS += 1) {
            if (s[iS] == s[iS - 1]) {
                cnt += 1;
            } else {
                if (cnt == 1) {
                    std::cout << "NO\n";
                    fl = false;
                    break;
                }
                cnt = 1;
            }
        }
        if (fl) {
            std::cout << "YES\n";
        }
    }
}
