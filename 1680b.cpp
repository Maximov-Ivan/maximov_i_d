#include <iostream>
#include <vector>

int main() {
    int t = 0;
    int n = 0;
    int m = 0;
    std::vector <std::vector <char> > a;
    std::cin >> t;
    for (int iT = 0; iT < t; iT += 1) {
        std::cin >> n >> m;
        a.resize(n);
        for (int iN = 0; iN < n; iN += 1) {
            a[iN].resize(m);
            for (int iM = 0; iM < m; iM += 1) {
                std::cin >> a[iN][iM];
            }
        }
        bool ans = false;
        for (int iN = 0; iN < n; iN += 1) {
            for (int iM = 0; iM < m; iM += 1) {
                if (a[iN][iM] == 'R') {
                    bool r = true;
                    for (int jN = 0; jN < iN; jN += 1) {
                        for (int jM = 0; jM < m; jM += 1) {
                            if (a[jN][jM] == 'R') {
                                r = false;
                            }
                        }
                    }
                    for (int jM = 0; jM < iM; jM += 1) {
                        for (int jN = 0; jN < n; jN += 1) {
                            if (a[jN][jM] == 'R') {
                                r = false;
                            }
                        }
                    }
                    if (r) {
                        ans = true;
                    }
                }
            }
        }
        if (ans) {
            std::cout << "YES\n";
        } else {
            std::cout << "NO\n";
        }
    }
}
