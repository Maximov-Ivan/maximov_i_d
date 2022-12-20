#include <iostream>

int main() {
    std::string s1 = "";
    std::string s2 = "";
    std::cin >> s1 >> s2;
    int ans = s1.size() + s2.size();
    int i1 = s1.size() - 1;
    int i2 = s2.size() - 1;
    while (i1 >= 0 && i2 >= 0 && s1[i1] == s2[i2]) {
        i1 -= 1;
        i2 -= 1;
        ans -= 2;
    }
    std::cout << ans << std::endl;
}
