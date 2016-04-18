/**
 * @bug Fraction is completely fucked up
 */

#ifndef TRIGONOMETRYSAVER_FRACTIONS_H
#define TRIGONOMETRYSAVER_FRACTIONS_H

#include <iostream>
#include <cmath>
#include <wchar.h>

class fraction {
  public:
    double integral, numerator, inRoot, denominator;

    long gcd(long a, long b);

    void setFraction(double input);

    void giveFraction();

    double negativeControl(double *input);

    void fractionConvert(double *decimal);
};



#endif //TRIGONOMETRYSAVER_FRACTIONS_H
