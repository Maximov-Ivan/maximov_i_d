#include <iostream>
#include <vector>

int main() {
    int t = 0;
    int n = 0;
    std::cin >> t;
    std::vector <std::vector <int> > a(t);
    for (int i = 0; i < t; ++i) {
        std::cin >> n;
        if (n / 10000 != 0) {
            a[i].push_back((n / 10000) * 10000);
        } if (n / 1000 % 10 != 0) {
            a[i].push_back((n / 1000 % 10) * 1000);
        } if (n / 100 % 10 != 0) {
            a[i].push_back((n / 100 % 10) * 100);
        } if (n / 10 % 10 != 0) {
            a[i].push_back((n / 10 % 10) * 10);
        } if (n % 10 != 0) {
            a[i].push_back(n % 10);
        }
    }
    for (int i = 0; i < t; ++i) {
        std::cout << a[i].size() << "\n";
        for (int j = 0; j < a[i].size(); ++j) {
            std::cout << a[i][j] << ' ';
        }
        std::cout << "\n";
    }
}
