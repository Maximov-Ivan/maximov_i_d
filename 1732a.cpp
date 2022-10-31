#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
 
int gcd (int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}
 
int main()
{
    int t = 0;
    std::cin >> t;
    std::vector <int> a;
    for (int iT = 0; iT < t; iT += 1) {
        int n = 0;
        std::cin >> n;
        a.resize(n);
        std::cin >> a[0];
        int g = a[0];
        for (int iN = 1; iN < n; iN += 1) {
            std::cin >> a[iN];
            g = gcd(g, a[iN]);
        }
        if (g == 1) {
            std::cout << 0 << "\n";
        } else {
            int g1 = a[0];
            int g2 = a[0];
            for (int iN = 0; iN < n; iN += 1) {
                if (iN == n - 1) {
                    g1 = gcd(g1, gcd(a[iN], n));
                } else {
                    g1 = gcd(g1, a[iN]);
                }
                if (iN == n - 2) {
                    g2 = gcd(g2, gcd(a[iN], n - 1));
                } else {
                    g2 = gcd(g2, a[iN]);
                }
            }
            if (g1 == 1) {
                std::cout << 1 << "\n";
            } else if (g2 == 1) {
                std::cout << 2 << "\n";
            } else {
                std::cout << 3 << "\n";
            }
        }
    }
}
