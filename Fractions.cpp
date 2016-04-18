#include <cmath>
#include <iostream>
#include "Fractions.hpp"

using namespace std;

long fraction::gcd(long a, long b) {
    if (a == 0) {
        return b;
    } else if (b == 0) {
        return a;
    }

    if (a < b) {
        return gcd(a, b % a);
    } else {
        return gcd(b, a % b);
    }
}

void fraction::setFraction(double input) {
    integral    = std::floor(input);
    double frac = input - integral;

    const long precision = 1000000000; // This is the accuracy.
    long greatestCommon  = gcd(round(frac * precision), precision);

    denominator = precision / greatestCommon;
    numerator   = round(frac * precision) / greatestCommon;
}

void fraction::giveFraction() {
    cout << numerator;
    cout << " rt(" << inRoot << ")" << endl;
    cout << "----------" << endl;
    cout << denominator << endl;
}

double fraction::negativeControl(double *input) {
    return 0.0;
}

void fraction::fractionConvert(double *decimal) {

}