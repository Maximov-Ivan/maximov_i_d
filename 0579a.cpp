#include <iostream>
#include <cmath>

int main() {
    int n = 0;
    std::cin >> n;
    int ans = 0;
    while (n > 0) {
        ans += n & 1;
        n >>= 1;
    }
    std::cout << ans;
}
