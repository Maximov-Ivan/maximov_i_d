#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
 
int main() {
    int t = 0;
    std::cin >> t;
    for (int q = 0; q < t; ++q) {
        int n = 0;
        std::cin >> n;
        std::string s;
        std::cin >> s;
        int cnt = 0;
        bool fl = false;
        for (int iN = 1; iN < n; iN += 1) {
            if (s[iN - 1] == '1' && s[iN] == '0') {
                fl = true;
                cnt += 1;
            } else if (s[iN - 1] == '0' && s[iN] == '1' && fl) {
                cnt += 1;
            }
        }
        std::cout << cnt << "\n";
    }
}
