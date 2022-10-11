#include <iostream>
#include <vector>
 
int main() {
    int n = 0;
    int p = 0;
    std::cin >> n;
    std::vector <int> a(n, 0);
    for (int iN = 1; iN <= n; iN += 1) {
        std::cin >> p;
        a[p - 1] = iN;
    }
    for (int iN = 0; iN < n; iN += 1) {
        std::cout << a[iN] << ' ';
    }
}
