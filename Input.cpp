
#include <iostream>
#include <cmath>
#include "Help.hpp"

using namespace std;

void inputDegrees(double *mainRads) {
    double rawDegree;
    double rawRadian;
    string operation;
    cout << "Please enter the function followed by a space and the degree (for possible functions enter h): ";
    cin >> operation;

    if (operation == "h") {
        help('f');
    }

    cin >> rawDegree;

    rawRadian = (rawDegree * M_PI) / 180;

    if (operation == "d") {
        *mainRads = rawRadian;
    } else if (operation == "asin") {
        *mainRads = asin(rawRadian);
    } else if (operation == "acos") {
        *mainRads = acos(rawRadian);
    } else if (operation == "atan") {
        *mainRads = atan(rawRadian);
    }
}