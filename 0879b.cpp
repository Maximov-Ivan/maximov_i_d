#include <iostream>
#include <vector>

int main() {
    int n = 0;
    long long k = 0;
    std::cin >> n >> k;
    std::vector <int> a(n);
    for (int iN = 0; iN < n; iN += 1) {
        std::cin >> a[iN];
    }
    int winner = a[0];
    int win_streak = 0;
    bool finish = false;
    for (int iN = 1; iN < n; iN += 1) {
        if (a[iN] < winner) {
            win_streak += 1;
        } else {
            winner = a[iN];
            win_streak = 1;
        }
        if (win_streak >= k) {
            finish = true;
            break;
        }
    }
    std::cout << winner;
}
