#include <iosfwd>

struct Rdec2D {
    double x = 0.0;
    double y = 0.0;
};

std::ostream& operator<<(std::ostream& ostrm, const Rdec2D& a);

std::istream& operator>>(std::istream& istrm, Rdec2D& a);

Rdec2D operator-(const Rdec2D& a);

Rdec2D operator+(const Rdec2D& a, const Rdec2D& b);

Rdec2D operator-(const Rdec2D& a, const Rdec2D& b);

Rdec2D operator*(const double& c, const Rdec2D& a);

Rdec2D operator*(const Rdec2D& a, const double& c);

Rdec2D operator/(const Rdec2D& a, const double& c);

double Dot(const Rdec2D& a, const Rdec2D& b);

double Norm(const Rdec2D& a);

bool operator==(const Rdec2D& a, const Rdec2D& b);

bool operator!=(const Rdec2D& a, const Rdec2D& b);



struct Rpol2D {
    double r = 0.0;
    double phi = 0.0;
};

std::ostream& operator<<(std::ostream& ostrm, const Rpol2D& a);

std::istream& operator>>(std::istream& istrm, Rpol2D& a);

Rpol2D ToPol(const Rdec2D& a);

Rdec2D ToDec(const Rpol2D& a);

Rpol2D operator-(const Rpol2D& a);

Rpol2D operator+(const Rpol2D& a, const Rpol2D& b);

Rpol2D operator-(const Rpol2D& a, const Rpol2D& b);

Rpol2D operator*(const double& c, const Rpol2D& a);

Rpol2D operator*(const Rpol2D& a, const double& c);

Rpol2D operator/(const Rpol2D& a, const double& c);

double Dot(const Rpol2D& a, const Rpol2D& b);

double Norm(const Rpol2D& a);

bool operator==(const Rpol2D& a, const Rpol2D& b);

bool operator!=(const Rpol2D& a, const Rpol2D& b);