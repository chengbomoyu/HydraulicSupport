#ifndef INTERFACE_H
#define INTERFACE_H
void bciHydraulicSystemInit();
void bciHydraulicSystemStatusSet(bool status);
void bciHydraulicSystemPressureSet(double value);
void bciHydraulicSystemCoefficient(double Coefficient1,double Coefficient2);
void bciHydraulicSystemPressureSetZero();

double bciHydraulicSystemPressureShow();
void bciHydraulicSystemPressureSend();
void bciHydraulicSystemPIDControl();

#endif // INTERFACE_H
