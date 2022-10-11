#include <iostream>
#include <vector>

int main() {
    std::vector <std::vector <char> > a(8, std::vector <char> (8, '.'));
    int t = 0;
    std::cin >> t;
    for (int iT = 0; iT < t; iT += 1) {
        for (int i = 0; i < 8; i += 1) {
            for (int j = 0; j < 8; j += 1) {
                std::cin >> a[i][j];
            }
        }
        for (int i = 1; i < 7; i += 1) {
            for (int j = 1; j < 7; j += 1) {
                if (a[i][j] == '#' && a[i-1][j-1] == '#' && a[i-1][j+1] == '#' && a[i+1][j-1] == '#' && a[i+1][j+1] == '#') {
                    std::cout << i + 1 << ' ' << j + 1 << "\n";
                }
            }
        }
    }
}
