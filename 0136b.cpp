#include <iostream>
#include <vector>
#include <string>

int main() {
    int a = 0;
    long long b = 0;
    int c = 0;
    std::cin >> a >> c;
    std::string a3 = "";
    std::string b3 = "";
    std::string c3 = "";
    while (a > 0) {
        a3 += char('0' + a % 3);
        a /= 3;
    }
    while (c > 0) {
        c3 += char('0' + c % 3);
        c /= 3;
    }
    int ca = c3.size() - a3.size();
    int ac = a3.size() - c3.size();
    for (int i = 0; i < ca; i += 1) {
        a3 += '0';
    }
    for (int i = 0; i < ac; i += 1) {
        c3 += '0';
    }
    for (int i = a3.size() - 1; i >= 0; i -= 1) {
        b3 += char('0' + (c3[i] - a3[i] + 3) % 3);
    }
    for (int i = 0; i < b3.size(); i += 1) {
        b *= 3;
        b += (b3[i] - '0');
    }
    std::cout << b;
}
