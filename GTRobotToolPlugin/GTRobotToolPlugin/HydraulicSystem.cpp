#include "HydraulicSystem.h"
#include "gtrobot_backend_define.h"
#include "gtrobot_backend_interface.h"

HydraulicSystem::HydraulicSystem(){
	statusSystem = false;

	dValuePressureSet = 0;
	dValuePressureNow = 0;
	dvaluePressureZeroAD = 0;

	dvaluePressureNowAD = 0;

	Coefficient = 0.1;
	Coefficient2 = 0.1;

	dValuePressureContlolAD = 0;
	dValuePressureContlolADDelta = 0;
}

HydraulicSystem::~HydraulicSystem(){
}

void HydraulicSystem::HydraulicSystemEnableSet(){
	if(statusSystem == true){
		GTR_SetDoBitValue(true,4,0);
	}
	else{
		GTR_SetDoBitValue(false,4,0);
	}
}

void HydraulicSystem::HydraulicSystemPressureSend(){
	GTR_SetAoValue(dvaluePressureNowAD,1,1);
}

void HydraulicSystem::HydraulicSystemSerPressureZero(){
	GTR_GetAiValue(dvaluePressureZeroAD,0,1);
	dvaluePressureZeroAD = fabs(dvaluePressureZeroAD);
}

void HydraulicSystem::HydraulicSystemPIDControl(){

	GTR_GetAiValue(dvaluePressureNowAD,0,1);
	dvaluePressureNowAD = fabs(dvaluePressureNowAD);
	double temp = dvaluePressureNowAD - dvaluePressureZeroAD;
	temp = fabs(temp);
	dValuePressureNow = temp * 2000;

	if(statusSystem == true){
		if(dValuePressureNow <= dValuePressureSet){
			dValuePressureContlolAD = dValuePressureContlolAD + Coefficient;
		}
		if(dValuePressureNow > dValuePressureSet){
			dValuePressureContlolAD = dValuePressureContlolAD - Coefficient2;
		}

		if(dValuePressureContlolAD >= 5) dValuePressureContlolAD = 5;
		if(dValuePressureContlolAD <= 0) dValuePressureContlolAD = 0;
		GTR_SetAoValue(dValuePressureContlolAD,0,1);
	}
}