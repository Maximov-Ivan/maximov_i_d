#include <iostream>

int main()
{
    int n = 0;
    int k = 0;
    int f = 0;
    int t = 0;
    int y = -1000000000;
    std::cin >> n >> k;
    for (int i = 0; i < n; i += 1) {
        std::cin >> f >> t;
        if (t <= k) {
            y = std::max(y, f);
        } else {
            y = std::max(y, f - t + k);
        }
    }
    std::cout << y;
    return 0;
}
