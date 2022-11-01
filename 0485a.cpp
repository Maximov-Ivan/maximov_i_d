#include <iostream>
#include <set>

int main() {
    int a = 0;
    int m = 0;
    std::cin >> a >> m;
    std::set <int> s;
    s.insert(a % m);
    while (true) {
        a = (a + a % m) % m;
        if (a == 0) {
            std::cout << "Yes";
            break;
        } else if (s.find(a) != s.end()) {
            std::cout << "No";
            break;
        }
        s.insert(a);
    }
}
