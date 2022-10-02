#include <iostream>
#include <string>
#include <vector>

int main() {
    int t = 0;
    int n = 0;
    int iN = 0;
    std::string s = "";
    std::cin >> t;
    std::vector <std::string> ans(t, "");
    for (int iT = 0; iT < t; iT += 1) {
        std::cin >> n >> s;
        s += "...";
        iN = 0;
        while (iN < n) {
            if (s[iN + 2] == '0' && s[iN + 3] != '0') {
                ans[iT] += char('a' + 10 * (s[iN] - '0') + (s[iN + 1] - '0') - 1);
                iN += 3;
            } else {
                ans[iT] += char('a' + (s[iN] - '0') - 1);
                iN += 1;
            }
        }
    }
    for (int iT = 0; iT < t; iT += 1) {
        std::cout << ans[iT] << "\n";
    }
}
