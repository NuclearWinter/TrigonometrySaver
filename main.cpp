#include <iostream>
#include "Input.hpp"
#include "TrigValues.hpp"
#include "TrigonometricOperations.hpp"
#include "Fractions.hpp"

using namespace std;

int main() {
    TrigValues programValues;
    fraction programFraction;
    double radians;

    string continueAns = " ";
    cout << "This program gives you all trigonometric values based on a trigonometric function and a degree.\n"
                    "If you need to convert from radians please use the other tool before proceeding.\n"
                    "Enter y to continue, or anything else to exit: " <<endl;
    cin >> continueAns;

    if (continueAns == "y") {
        inputDegrees(&radians);
        programFraction.setFraction(radians);
        programFraction.giveFraction();
        programValues.displayValues(radians);
    }

    return 0;
}