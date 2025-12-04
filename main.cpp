#include <iostream>
#include <cmath>

double f(double x) {
    double numerator   = -8.0 + x;
    double denominator = 20.0 + 1.0 / (8.0 + x);
    double term1 = numerator / denominator;
    double term2 = std::pow(std::tanh(x), 9.0);
    return term1 + term2;
}

double g(double x) {
    const double a = -0.5;
    const double b =  0.5;

    if (x < a)       return 0.0;
    else if (x <= b) return f(x);
    else             return x;
}

int main() {
    for (double x = -1.0; x <= 1.0001; x += 0.1) {
        std::cout << "x = " << x << "   g(x) = " << g(x) << '\n';
    }
    return 0;
}
