#include <vector2D/vector2D.h>
#include <iostream>
#include <fstream>
#include <cmath>

struct State {
    Rdec2D r;
    Rdec2D v;
    Rdec2D a;
};

int main() {
    std::ofstream fout("../../../circle.txt");
    //State s_0{{-1, 1}, {0, 0}, {0, 0}}; // line
    State s_0{ {-1, 0}, {0, 1}, {0, 0} }; // circle
    //State s_0{{-1, 1}, {0.5, 0.5}, {0, 0}}; // ellipse
    //State s_0{{-2, 1}, {1, 0}, {0, 0}}; // parabola
    State s = s_0;
    double k = 1;
    double dt = 1e-3;
    double t = 0;
    while (t < 10) {
        s.a = k * -s.r / (Norm(s.r) * Norm(s.r) * Norm(s.r));
        if (Norm(s.a) > k * 10) {
            s.r = s.r + dt * s.v;
            t += dt;
            fout << s.r;
            continue;
        }
        s.v = s.v + dt * s.a;
        s.r = s.r + dt * s.v;
        t += dt;
        fout << s.r;
    }
    fout.close();
}
