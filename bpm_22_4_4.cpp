#include <iostream>
#include <vector>

int n = 0;

std::vector <std::vector <double> > matrix_mul_matrix(const std::vector <std::vector <double> > a,
                                                      const std::vector <std::vector <double> > b) {
    std::vector <std::vector <double> > c(n, std::vector <double> (n, 0.0));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            for (int k = 0; k < n; ++k) {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    return c;
}

std::vector <std::vector <double> > matrix_mul_number(const double k,
                                                      const std::vector <std::vector <double> > a) {
    std::vector <std::vector <double> > c(n, std::vector <double> (n, 0.0));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            c[i][j] = k * a[i][j];
        }
    }
    return c;
}

std::vector <std::vector <double> > matrix_add_matrix(const std::vector <std::vector <double> > a,
                                                      const std::vector <std::vector <double> > b) {
    std::vector <std::vector <double> > c(n, std::vector <double> (n, 0.0));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            c[i][j] = a[i][j] + b[i][j];
        }
    }
    return c;
}

double det(const std::vector <std::vector <double> > a) {
    double d = 0.0;
    d = a[0][0] * a[1][1] - a[0][1] * a[1][0];
    return d;
}

int main() {
    std::cin >> n;
    std::vector <std::vector <double> > a(n, std::vector <double> (n, 0.0));
    std::vector <std::vector <double> > e(n, std::vector <double> (n, 0.0));
    std::vector <std::vector <double> > a_k(n, std::vector <double> (n, 0.0));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            std::cin >> a[i][j];
            if (i == j) {
                e[i][j] = 1.0;
                a_k[i][j] = 1.0;
            }
        }
    }
    double eps = 0.0;
    std::cin >> eps;
    while (std::abs(det(matrix_mul_matrix(a, a_k)) - 1) > eps) {
        a_k = matrix_mul_matrix(a_k, matrix_add_matrix(matrix_mul_number(2.0, e), matrix_mul_number(-1.0, a_k)));
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                std::cout << a_k[i][j] << ' ';
            }
            std::cout << "\n";
        }
    }
}
