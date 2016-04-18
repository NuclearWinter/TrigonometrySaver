/** @brief   Holds, sets, gets, and displays trigonometric values
 *  @file    TrigValues.hpp
 *  @author  William Kluge
 *  @version 1.0
 *  @bug Sometimes seeZero doesn't work when I think it should
 */

#ifndef TRIGONOMETRYSAVER_TRIGONOMETRICVALUES_H
#define TRIGONOMETRYSAVER_TRIGONOMETRICVALUES_H

class TrigValues {
public:
/** @brief Construct a TrigValues
 */
    TrigValues();

/** @brief Set the value of sin in a TrigValues
 *  @param sinValue The value to set sin to
 */
 //   void setSin(double sinValue);

/** @brief Get the value of sin from a TrigValues
 *  @return The value of sin
 */
  //  double getSin();

/** @brief
 *
 */
    /*
    void setCos(double cosValue);

    double getCos();

    void setTan(double tanValue);

    double getTan();

    void setSec(double secValue);

    void setCsc(double cscValue);

    void setCot(double cotValue);
*/
    void displayValues(double radians);

//private:
    //double sin, cos, tan, sec, csc, cot;

};

#endif //TRIGONOMETRYSAVER_TRIGONOMETRICVALUES_H
