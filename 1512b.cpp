#include <iostream>
#include <vector>

int main() {
    int t = 0;
    int n = 0;
    int m = 0;
    std::vector <std::vector <char> > a;
    std::cin >> t;
    for (int iT = 0; iT < t; iT += 1) {
        std::cin >> n;
        a.resize(n);
        int i1 = -1;
        int j1 = -1;
        int i2 = -1;
        int j2 = -1;
        for (int iN = 0; iN < n; iN += 1) {
            a[iN].resize(n);
            for (int jN = 0; jN < n; jN += 1) {
                std::cin >> a[iN][jN];
                if (a[iN][jN] == '*') {
                    if (i1 == -1) {
                        i1 = iN;
                        j1 = jN;
                    } else {
                        i2 = iN;
                        j2 = jN;
                    }
                }
            }
        }
        if (i1 == i2) {
            if (i1 == 0) {
                a[1][j1] = '*';
                a[1][j2] = '*';
            } else {
                a[0][j1] = '*';
                a[0][j2] = '*';
            }
        } else if (j1 == j2) {
            if (j1 == 0) {
                a[i1][1] = '*';
                a[i2][1] = '*';
            } else {
                a[i1][0] = '*';
                a[i2][0] = '*';
            }
        } else {
            a[i1][j2] = '*';
            a[i2][j1] = '*';
        }
        for (int iN = 0; iN < n; iN += 1) {
            for (int jN = 0; jN < n; jN += 1) {
                std::cout << a[iN][jN];
            }
            std::cout << "\n";
        }
    }
}
