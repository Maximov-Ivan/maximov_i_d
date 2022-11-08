#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int n = 0;
    long long a = 0;
    long long b = 0;
    std::cin >> n >> a >> b;
    std::vector <long long> s(n - 1);
    int s0 = 0;
    std::cin >> s0;
    int sum = s0;
    for (int iN = 0; iN < n - 1; ++iN) {
        std::cin >> s[iN];
        sum += s[iN];
    }
    sort(s.begin(), s.end());
    int ans = 0;
    for (int iN = n - 2; iN >= 0; --iN) {
        if (s0 * a < sum * b) {
            sum -= s[iN];
            ans++;
        }
    }
    std::cout << ans;
}
