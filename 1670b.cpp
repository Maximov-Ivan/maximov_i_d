/*
#include <iostream>
#include <vector>

int main() {
    int t = 0;
    int n = 0;
    int k = 0;
    int cnt = 0;
    bool fl = true;
    std::string s = "", s1 = "";
    char c = ' ';
    std::vector <char> chars;
    chars.reserve(26);
    std::cin >> t;
    std::vector <int> ans(t);
    for (int iT = 0; iT < t; iT += 1) {
        std::cin >> n >> s >> k;
        chars.clear();
        for (int iK = 0; iK < k; iK += 1) {
            std::cin >> c;
            chars.push_back(c);
        }
        fl = true;
        cnt = 0;
        while (fl) {
            fl = false;
            n = s.size();
            for (int iN = 0; iN < n - 1; iN += 1) {
                for (int iK = 0; iK < k; iK += 1) {
                    if (s[iN + 1] == chars[iK]) {
                        s[iN] = ' ';
                        fl = true;
                    }
                }
            }
            s1 = "";
            for (int iN = 0; iN < n; iN += 1) {
                if (s[iN] != ' ') {
                    s1 += s[iN];
                }
            }
            s = s1;
            cnt += 1;
        }
        ans[iT] = cnt - 1;
    }
    for (int iT = 0; iT < t; iT += 1) {
        std::cout << ans[iT] << "\n";
    }
}
*/

#include <iostream>
#include <vector>
#include <string>
#include <cmath>

int main() {
    std::ios_base::sync_with_stdio(false);
    int t = 0;
    int n = 0;
    int k = 0;
    int cnt = 0;
    int max_cnt = 0;
    std::string s = "";
    char c = ' ';
    std::vector <char> chars;
    std::cin >> t;
    std::vector <int> ans(t);
    for (int iT = 0; iT < t; iT += 1) {
        std::cin >> n >> s >> k;
        chars.clear();
        for (int iK = 0; iK < k; iK += 1) {
            std::cin >> c;
            chars.push_back(c);
        }
        cnt = 0;
        max_cnt = 0;
        for (int iN = 0; iN < n; iN += 1) {
            for (int iK = 0; iK < k; iK += 1) {
                if (s[iN] == chars[iK]) {
                    max_cnt = std::max(max_cnt, cnt);
                    cnt = 0;
                }
            }
            cnt += 1;
        }
        ans[iT] = max_cnt;
    }
    for (int iT = 0; iT < t; iT += 1) {
        std::cout << ans[iT] << "\n";
    }
}
