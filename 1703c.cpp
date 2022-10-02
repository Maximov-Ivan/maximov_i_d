/*#include <iostream>
#include <string>

int main() {
  int t = 0; // число наборов
  std::cin >> t;
  std::string code; // код
  code.reserve(100);
  int n = 0;
  int b = 0;
  std::string s;
  for (int iSet = 0; iSet < t; iSet += 1) {
    std::cin >> n;
    code.resize(n);
    for (int iNumber = 0; iNumber < n; iNumber += 1) {
      std::cin >> code[iNumber];
    }
    for (int iLine = 0; iLine < n; iLine += 1) {
      std::cin >> b >> s;
      for (int iCh = 0; iCh < b; iCh += 1) {
        char& ch = code[iLine];
        if ('U' == s[iCh]) {
          ch = '0' == ch ? '9' : ch - 1;
        } else if ('D' == s[iCh]) {
          ch = '9' == ch ? '0' : ch + 1;
        }
      }
    }
    for (int iCh = 0; iCh < code.length(); iCh += 1) {
      std::cout << code[iCh] << ' ';
    }
    std::cout << '\n';
  }
}
*/

#include <iostream>
#include <string>

int main() {
    int t = 0;
    int n = 0;
    unt b = 0;
    std::string a, m;
    a.reserve(100);
    std::cin >> t;
    for (int iT = 0; iT < t; iT += 1) {
        std::cin >> n;
        a.resize(n);
        for (int iN = 0; iN < n; iN += 1) {
            std::cin >> a[iN];
        }
        for (int iN = 0; iN < n; iN += 1) {
            std::cin >> b >> m;
            char& c = a[iN];
            for (int iB = 0; iB < b; iB += 1) {
                if ('U' == m[iB]) {
                    c = '0' == c ? '9' : c - 1;
                } else if ('D' == m[iB]) {
                    c = '9' == c ? '0' : c + 1;
                }
            }
        }
        for (int iN = 0; iN < a.length(); iN += 1) {
            std::cout << a[iN] << ' ';
        }
        std::cout << '\n';
    }
}
