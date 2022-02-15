#include "interface.h"
#include "HydraulicSystem.h"

HydraulicSystem *mhydraulicsystem = 0;

void bciHydraulicSystemInit(){
	mhydraulicsystem = new HydraulicSystem();
}
void bciHydraulicSystemStatusSet(bool status){
	mhydraulicsystem->statusSystem = status;
	mhydraulicsystem->HydraulicSystemEnableSet();
}
void bciHydraulicSystemPressureSet(double value){
	mhydraulicsystem->dValuePressureSet = value;
}

void bciHydraulicSystemCoefficient(double dKp,double dKi,double dkd){
	mhydraulicsystem->dValueKp = dKp;
	mhydraulicsystem->dValueKi = dKi;
	mhydraulicsystem->dValueKd = dkd;
}

void bciHydraulicSystemPressureSetZero(){
	mhydraulicsystem->HydraulicSystemSerPressureZero();
}

double bciHydraulicSystemPressureShow(){
	return mhydraulicsystem->dValuePressureNow;
}

void bciHydraulicSystemPressureSend(){
	mhydraulicsystem->HydraulicSystemPressureSend();
}
void bciHydraulicSystemPIDControl(){
	mhydraulicsystem->HydraulicSystemPIDControl();
}
