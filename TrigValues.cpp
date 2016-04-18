#include <iostream>
#include "TrigValues.hpp"
#include "TrigonometricOperations.hpp"
#include <cmath>
#include "Fractions.hpp"

using namespace std;


TrigValues::TrigValues() {

}

void seeZero(double *check) {
    if (*check < .0000001) {
        *check = 0;
    }
}

void TrigValues::displayValues(double radians) {
    double sine = sin(radians);
    double cose = cos(radians);
    double tane = tan(radians);
    double sece = sec(sine);
    double csce = csc(cose);
    double cote = cot(tane);

    seeZero(&sine);
    seeZero(&cose);
    seeZero(&tane);
    seeZero(&sece);
    seeZero(&csce);
    seeZero(&cote);

    cout << "Trigonometric Values: \n"
    << "Sine: " <<'\n';
    //fractionConvert(&sine);
    cout << "Cosine: "    << cose <<'\n'
    << "Tangant: "   << tane <<'\n'
    << "Secant: "    << sece <<'\n'
    << "Cosecant: "  << csce <<'\n'
    << "Cotangant: " << cote <<'\n';
}

/*
void TrigValues::setSin(double sinValue) {
    //sin = sinValue;
}

void TrigValues::setCos(double cosValue) {
   // cos = cosValue;
}

void TrigValues::setTan(double tanValue) {
  //  tan = tanValue;
}

void TrigValues::setSec(double secValue) {
  //  sec = secValue;
}

void TrigValues::setCsc(double cscValue) {
  //  csc = cscValue;
}

void TrigValues::setCot(double cotValue) {
 //   cot = cotValue;
}

double TrigValues::getSin() {
   // return sin;
}

double TrigValues::getCos() {
  //  return cos;
}

double TrigValues::getTan() {
  //  return tan;
}
*/