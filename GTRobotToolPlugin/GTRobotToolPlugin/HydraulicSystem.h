#ifndef HYDRAULIC_SYSTEM_H
#define HYDRAULIC_SYSTEM_H

class HydraulicSystem {
public:
	bool statusSystem;
	double dvaluePressureZeroAD;
	double dValuePressureSet;
	double dvaluePressureNowAD;
	double dValuePressureNow;

	double Coefficient;
	double Coefficient2;
	
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
