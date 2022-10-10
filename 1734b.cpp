#include <iostream>
#include <vector>

int main() {
    int t = 0;
    int n = 0;
    std::cin >> t;
    std::vector <std::vector <int> > a(t);
    for (int iT = 0; iT < t; iT += 1) {
        std::cin >> n;
        for (int iN = 1; iN <= n; iN += 1) {
            for (int jN = iN; jN > 0; jN -= 1) {
                if (jN == iN || jN == 1) {
                    a[iT].push_back(1);
                } else {
                    a[iT].push_back(0);
                }
            }
            a[iT].push_back(-1);
        }
    }
    for (int iT = 0; iT < t; iT += 1) {
        for (int iN = 0; iN < a[iT].size(); iN += 1) {
            if (a[iT][iN] == -1) {
                std::cout << "\n";
            } else {
                std::cout << a[iT][iN] << ' ';
            }
        }
    }
}
