#include <iostream>

int main()
{
    int t = 0;
    int n = 0;
    int k = 0;
    int r = 0;
    int c = 0;
    std::string s = "";
    std::cin >> t;
    for (int q = 0; q < t; q += 1) {
        std::cin >> n >> k >> r >> c;
        for (int i = 0; i < n; i += 1) {
            for (int j = 0; j < n; j += 1) {
                if ((i + j) % k == (r + c - 2) % k) {
                    s += "X";
                } else {
                    s += ".";
                }
            }
            s += "\n";
        }
    }
    std::cout << s;
    return 0;
}
