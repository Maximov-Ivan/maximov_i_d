#include <iostream>

int main() {
    int n = 0;
    char c = 0;
    int x = 0;
    int y = 0;
    int s = 0;
    int ans = 0;
    std::cin >> n >> c;
    if (c == 'U') {
        y += 1;
        s = 2;
    } else {
        x += 1;
        s = 1;
    }
    for (int iN = 1; iN < n; iN += 1) {
        std::cin >> c;
        if (c == 'U') {
            y += 1;
        } else {
            x += 1;
        }
        if (x > y && s == 2) {
            s = 1;
            ans += 1;
        } else if (x < y && s == 1) {
            s = 2;
            ans += 1;
        }
    }
    std::cout << ans;
}
