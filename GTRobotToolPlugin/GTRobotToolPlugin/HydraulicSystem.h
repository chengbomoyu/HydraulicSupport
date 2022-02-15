#ifndef HYDRAULIC_SYSTEM_H
#define HYDRAULIC_SYSTEM_H

class HydraulicSystem {
public:
	bool statusSystem;
	double dvaluePressureZeroAD;
	double dValuePressureSet;
	double dvaluePressureNowAD;
	double dValuePressureNow;

	double dValuePressureError;
	double dValuePressureLastError;
	double dValuePressurePreviousError;
	double dValueKp;
	double dValueKi;
	double dValueKd;
	
	double dValuePressureContlolAD;
	double dValuePressureContlolADDelta;

	HydraulicSystem();
	~HydraulicSystem();
	
	
	void HydraulicSystemEnableSet();
	void HydraulicSystemPressureSend();
	void HydraulicSystemSerPressureZero();
	void HydraulicSystemPIDControl();
};

#endif // HYDRAULIC_SYSTEM_H
