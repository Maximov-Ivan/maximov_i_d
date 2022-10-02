#include <iostream>
#include <array>

int main() {
    int n = 0;
    int nb = 0;
    int x = 0;
    int fl = 0;
    std::array <int, 50> a{0};
    std::array <int, 50> b{0};
    std::cin >> n;
    for (int i = 0; i < n; i += 1) {
        std::cin >> x;
        a[i] = x;
    }
    for (int i = n - 1; i >= 0; i -= 1) {
        fl = 1;
        for (int j = 0; j < nb; j += 1) {
            if (b[j] == a[i]) {
                fl = 0;
            }
        }
        if (fl == 1) {
            b[nb] = a[i];
            nb += 1;
        }
    }
    std::cout << nb << "\n";
    for (int i = nb - 1; i >= 0; i -= 1) {
        std::cout << b[i] << ' ';
    }
}

/*
#include <iostream>
#include <vector>

int main() {
    int n = 0;
    int x = 0;
    int fl = 0;
    std::vector <int> a;
    std::vector <int> b;
    std::cin >> n;
    for (int i = 0; i < n; i += 1) {
        std::cin >> x;
        a.push_back(x);
    }
    for (int i = n - 1; i >= 0; i -= 1) {
        fl = 1;
        for (int j = 0; j < b.size(); j += 1) {
            if (b[j] == a[i]) {
                fl = 0;
            }
        }
        if (fl == 1) {
            b.push_back(a[i]);
        }
    }
    std::cout << b.size() << "\n";
    for (int i = b.size() - 1; i >= 0; i -= 1) {
        std::cout << b[i] << ' ';
    }
}
*/
