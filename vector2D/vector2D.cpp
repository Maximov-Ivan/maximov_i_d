#include "vector2D.h"
#include <cmath>
#include <iostream>

const double eps = 1e-7;

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
