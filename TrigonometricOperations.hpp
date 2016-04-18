/** @brief   Calculate trigonometric functions and place them into a TrigValue structure.
 *  @file    TrigonometricOperations.hpp
 *  @author  William Kluge
 *  @version 1.0
 */

#ifndef TRIGONOMETRYSAVER_TRIGONOMETRICOPERATIONS_H
#define TRIGONOMETRYSAVER_TRIGONOMETRICOPERATIONS_H

/** @brief  Calculate secant
 *  @param  sinReturn The return from a sine function
 *  @return Secant corresponding to sinReturn
 */
double sec(double sinReturn);

/** @brief  Calculate cosecant
 *  @param  cosReturn The return from a cosine function
 *  @return Cosecant corresponding to cosReturn
 */
double csc(double cosReturn);

/** @brief  Calculate cotangant
 *  @param  tanreturn The return from a tangant function
 *  @return Cotangant corresponding to tanReturn
 */
double cot(double tanReturn);

/** @brief Fill a TrigValues with trigonometric values
 *  @param radians The radian value to base calculations off of
 *  @param values  Which TrigValues class is being used
 *  @see   TrigValues.cpp
 */
void fillFunctions(double radians, TrigValues values);

#endif //TRIGONOMETRYSAVER_TRIGONOMETRICOPERATIONS_H
