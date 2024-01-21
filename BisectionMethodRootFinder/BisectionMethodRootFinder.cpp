#include <iostream>
#include <cmath>
#include <functional>
using namespace std;

double bisection(const std::function<double(double)>& func, double a, double b, double tolerance) {
    for (int i = 0; i < 9999999; i++) {
        double c = (a + b) / 2;
        double f_c = func(c);

        if (fabs(f_c) < tolerance) {
            return c;
        }

        if (func(a) * f_c < 0) {
            b = c;
        }
        else {
            a = c;
        }
    }

    return std::numeric_limits<double>::quiet_NaN(); // Indicate failure if loop doesn't converge
}

double userDefinedFunction(double x) {
    return (x * x * x) - x - 1;
}

int main() {
    float a = 0, b = 2;
    double tolerance = 0.01;

    double root = bisection(userDefinedFunction, a, b, tolerance);

    if (!std::isnan(root)) {
        cout << "Root found at: " << root << endl;
    }
    else {
        cout << "Bisection method did not converge." << endl;
    }

    return 0;
}
