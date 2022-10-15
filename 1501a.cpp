#include <iostream>
#include <vector>

int main() {
    int t = 0;
    int n = 0;
    std::vector <int> a;
    std::vector <int> b;
    std::vector <int> time;
    std::cin >> t;
    for (int iT = 0; iT < t; iT += 1) {
        std::cin >> n;
        a.resize(n + 1);
        b.resize(n + 1);
        b[0] = 0;
        for (int iN = 1; iN <= n; iN += 1) {
            std::cin >> a[iN] >> b[iN];
        }
        time.resize(n + 1);
        for (int iN = 1; iN <= n; iN += 1) {
            std::cin >> time[iN];
        }
        int curr_time = 0;
        for (int iN = 1; iN <= n; iN += 1) {
            curr_time += a[iN] - b[iN - 1] + time[iN];
            if (iN == n) {
                std::cout << curr_time << "\n";
            }
            curr_time += (b[iN] - a[iN] + 1) / 2;
            if (b[iN] > curr_time) {
                curr_time = b[iN];
            }
        }
    }
}
