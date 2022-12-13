#include <iostream>
#include <cmath>

const double eps = 1e-7;

struct Rdec2D {
    double x = 0.0;
    double y = 0.0;
};

std::ostream& operator<<(std::ostream& ostrm, const Rdec2D& a) {
    return ostrm << a.x << ' ' << a.y << "\n";
}

std::istream& operator>>(std::istream& istrm, Rdec2D& a) {
    return istrm >> a.x >> a.y;
}

Rdec2D operator-(const Rdec2D& a) {
    Rdec2D c;
    c.x = -a.x;
    c.y = -a.y;
    return c;
}

Rdec2D operator+(const Rdec2D& a, const Rdec2D& b) {
    Rdec2D c;
    c.x = a.x + b.x;
    c.y = a.y + b.y;
    return c;
}

Rdec2D operator-(const Rdec2D& a, const Rdec2D& b) {
    Rdec2D c;
    c.x = a.x - b.x;
    c.y = a.y - b.y;
    return c;
}

Rdec2D operator*(const double& c, const Rdec2D& a) {
    Rdec2D b;
    b.x = c * a.x;
    b.y = c * a.y;
    return b;
}

Rdec2D operator*(const Rdec2D& a, const double& c) {
    Rdec2D b;
    b.x = c * a.x;
    b.y = c * a.y;
    return b;
}

Rdec2D operator/(const Rdec2D& a, const double& c) {
    Rdec2D b;
    b.x = a.x / c;
    b.y = a.y / c;
    return b;
}

double Dot(const Rdec2D& a, const Rdec2D& b) {
    double c = 0.0;
    c = a.x * b.x + a.y * b.y;
    return c;
}

double Norm(const Rdec2D& a) {
    double c = 0.0;
    c = sqrt(a.x * a.x + a.y * a.y);
    return c;
}

bool operator==(const Rdec2D& a, const Rdec2D& b) {
    return (std::abs(a.x - b.x) < eps && std::abs(a.y - b.y) < eps);
}

bool operator!=(const Rdec2D& a, const Rdec2D& b) {
    return (std::abs(a.x - b.x) >= eps || std::abs(a.y - b.y) >= eps);
}

struct Rpol2D {
    double r = 0.0;
    double phi = 0.0;
};

std::ostream& operator<<(std::ostream& ostrm, const Rpol2D& a) {
    return ostrm << a.r << ' ' << a.phi << "\n";
}

std::istream& operator>>(std::istream& istrm, Rpol2D& a) {
    return istrm >> a.r >> a.phi;
}

Rpol2D ToPol(const Rdec2D& a) {
    Rpol2D b;
    b.r = Norm(a);
    b.phi = atan2(a.y, a.x);
    return b;
}

Rdec2D ToDec(const Rpol2D& a) {
    Rdec2D b;
    b.x = a.r * cos(a.phi);
    b.y = a.r * sin(a.phi);
    return b;
}

Rpol2D operator-(const Rpol2D& a) {
    Rpol2D c;
    c = ToPol(-ToDec(a));
    return c;
}

Rpol2D operator+(const Rpol2D& a, const Rpol2D& b) {
    Rpol2D c;
    c = ToPol(ToDec(a) + ToDec(b));
    return c;
}

Rpol2D operator-(const Rpol2D& a, const Rpol2D& b) {
    Rpol2D c;
    c = ToPol(ToDec(a) - ToDec(b));
    return c;
}

Rpol2D operator*(const double& c, const Rpol2D& a) {
    Rpol2D b;
    b = ToPol(c * ToDec(a));
    return b;
}

Rpol2D operator*(const Rpol2D& a, const double& c) {
    Rpol2D b;
    b = ToPol(c * ToDec(a));
    return b;
}

Rpol2D operator/(const Rpol2D& a, const double& c) {
    Rpol2D b;
    b = ToPol(c * ToDec(a));
    return b;
}

double Dot(const Rpol2D& a, const Rpol2D& b) {
    double c;
    c = Dot(ToDec(a), ToDec(b));
    return c;
}

double Norm(const Rpol2D& a) {
    return a.r;
}

bool operator==(const Rpol2D& a, const Rpol2D& b) {
    return (std::abs(ToDec(a).x - ToDec(b).x) < eps && std::abs(ToDec(a).y - ToDec(b).y) < eps);
}

bool operator!=(const Rpol2D& a, const Rpol2D& b) {
    return (std::abs(ToDec(a).x - ToDec(b).x) >= eps || std::abs(ToDec(a).y - ToDec(b).y) >= eps);
}

int main() {
    Rdec2D r_m_0{0, -10};
    Rdec2D r_c_0{20, 0};
    Rdec2D v_m_0{0, 1};
    double paw = 1e-5;
    double r_v_c = 10;
    double l_v_c = 0;
    while (r_v_c - l_v_c > eps) {
        Rdec2D r_m = r_m_0;
        Rdec2D r_c = r_c_0;
        Rdec2D v_m = v_m_0;
        Rdec2D v_c{0, 0};
        double v_0 = (r_v_c + l_v_c) / 2;
        double dt = 1e-6;
        double t = 0;
        double dist = Norm(r_m - r_c);
        double prev_dist = dist + 1.0;
        while (dist < prev_dist && r_m.y < 0 && dist > paw) {
            v_c = (r_m - r_c) / Norm(r_m - r_c) * v_0;
            r_m = r_m + dt * v_m;
            r_c = r_c + dt * v_c;
            prev_dist = dist;
            dist = Norm(r_m - r_c);
            t += dt;
            if (std::abs(v_c.y) < eps) {
                std::cout << r_c;
            }
        }
        if (dist <= paw) {
            r_v_c = v_0;
        } else {
            l_v_c = v_0;
        }
    }
    std::cout << l_v_c;
}
