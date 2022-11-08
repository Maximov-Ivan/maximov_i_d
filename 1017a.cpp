#include <iostream>
#include <map>

int main() {
    int n = 0;
    std::cin >> n;
    std::map <int, int> m;
    int key = -1;
    for (int iN = 0; iN < n; ++iN) {
        int a = 0;
        int b = 0;
        int c = 0;
        int d = 0;
        std::cin >> a >> b >> c >> d;
        int s = a + b + c + d;
        m[s] += 1;
        if (iN == 0) {
            key = s;
        }
    }
    int pos = n;
    for (auto elem : m) {
        pos -= elem.second;
        if (elem.first == key) {
            std::cout << pos + 1;
        }
    }
}
