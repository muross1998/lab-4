#include <stdio.h>
#include <math.h>

double f(double x) {
    double numerator   = -8.0 + x;
    double denominator = 20.0 + 1.0 / (8.0 + x);
    double term1 = numerator / denominator;
    double term2 = pow(tanh(x), 9.0);
    return term1 + term2;
}

double g(double x) {
    const double a = -0.5;
    const double b =  0.5;

    if (x < a)       return 0.0;
    else if (x <= b) return f(x);
    else             return x;
}

int main(void) {
    double x;
    for (x = -1.0; x <= 1.0001; x += 0.1) {   // 1.0001 щоб захопити 1.0
        printf("x = %5.2f   g(x) = %f\n", x, g(x));
    }
    return 0;
}
