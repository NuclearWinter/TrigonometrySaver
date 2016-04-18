#include <cmath>
#include "TrigValues.hpp"

double sec(double sinReturn) {
    return 1/sinReturn;
}

double csc(double cosReturn) {
    return 1/cosReturn;
}

double cot(double tanReturn) {
    return 1/tanReturn;
}
/*
void fillFunctions(double radians, TrigValues values) {
    values.setSin(sin(radians));
    values.setCos(cos(radians));
    values.setTan(tan(radians));
    values.setSec(sec(values.getSin()));
    values.setCsc(csc(values.getCos()));
    values.setCot(cot(values.getTan()));
}
*/