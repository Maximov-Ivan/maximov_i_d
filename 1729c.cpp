#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

int main() {
    int t = 0;
    int n = 0;
    std::string s = "";
    std::cin >> t;
    std::vector <int> ans_cost(t, 0);
    std::vector <int> ans_m(t, 0);
    std::vector <std::vector <int> > ans_tiles(t);
    std::vector <std::pair <int, int> > sorted_letters;
    for (int iT = 0; iT < t; iT += 1) {
        std::cin >> s;
        n = s.size();
        sorted_letters.clear();
        if (s[0] <= s[n - 1]) {
            ans_cost[iT] = s[n - 1] - s[0];
            for (int iN = 0; iN < n; iN += 1) {
                sorted_letters.push_back(std::make_pair(s[iN] - 'a', iN + 1));
            }
            std::sort(sorted_letters.begin(), sorted_letters.end());
            for (int iN = 0; iN < n; iN += 1) {
                if (sorted_letters[iN].first >= s[0] - 'a' && sorted_letters[iN].first <= s[n - 1] - 'a') {
                    ans_m[iT] += 1;
                    ans_tiles[iT].push_back(sorted_letters[iN].second);
                }
            }
        } else {
            ans_cost[iT] = s[0] - s[n - 1];
            for (int iN = 0; iN < n; iN += 1) {
                sorted_letters.push_back(std::make_pair('z' - s[iN], iN + 1));
            }
            std::sort(sorted_letters.begin(), sorted_letters.end());
            for (int iN = 0; iN < n; iN += 1) {
                if (sorted_letters[iN].first >= 'z' - s[0] && sorted_letters[iN].first <= 'z' - s[n - 1]) {
                    ans_m[iT] += 1;
                    ans_tiles[iT].push_back(sorted_letters[iN].second);
                }
            }
        }
    }
    for (int iT = 0; iT < t; iT += 1) {
        std::cout << ans_cost[iT] << ' ' << ans_m[iT] << "\n";
        for (int iM = 0; iM < ans_m[iT]; iM += 1) {
            std::cout << ans_tiles[iT][iM] << ' ';
        }
        std::cout << "\n";
    }
}
