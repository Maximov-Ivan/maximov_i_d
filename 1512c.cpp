#include <iostream>
#include <string>
#include <vector>

int main() {
    int t = 0;
    int n = 0;
    int k = 0;
    int cnt0 = 0;
    int cnt1 = 0;
    bool fl = true;
    std::string s = "";
    char c = ' ';
    std::cin >> t;
    std::vector <std::string> ans(t);
    for (int iT = 0; iT < t; iT += 1) {
        std::cin >> n >> k >> s;
        fl = true;
        cnt0 = 0;
        cnt1 = 0;
        for (int iK = 0; iK < k; iK += 1) {
            c = '?';
            for (int iN = iK; iN < n; iN += k) {
                if (s[iN] == '1' && c == '0') {
                    fl = false;
                } else if (s[iN] == '1') {
                    c = '1';
                } else if (s[iN] == '0' && c == '1') {
                    fl = false;
                } else if (s[iN] == '0') {
                    c = '0';
                }
            }
            if (c == '0') {
                cnt0 += 1;
            } else if (c == '1') {
                cnt1 += 1;
            }
        }
        if (fl == true && cnt0 <= k / 2 && cnt1 <= k / 2) {
            ans[iT] = "YES";
        } else {
            ans[iT] = "NO";
        }
    }
    for (int iT = 0; iT < t; iT += 1) {
        std::cout << ans[iT] << "\n";
    }
}
