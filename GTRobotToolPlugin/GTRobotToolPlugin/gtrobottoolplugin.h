#ifndef SUPPORT_H
#define SUPPORT_H

#include <QtGui/QWidget>
#include "qstring.h"

#include "ui_support.h"
#include "gtappframeinterface.h"
#include "gtrobot_backend_define.h"

class Support : public GtAppFrameInterface{
Q_OBJECT
	Q_INTERFACES(GtAppFrameInterface)

public:
/******************************************/
	Support(QWidget *parent = 0);
	~Support();
/******************************************/
	void signal_slot_connect();
/******************************************/
	public slots:
		void onpbtnclicked_buttonSystemEnable();
		void onpbtnclicked_buttonSystemReset();
		void onpbtnclicked_buttonSensorZero();
		void onpbtnclicked_buttonPressureDown();
		void onpbtnclicked_buttonPressureUp();
		void onpbtnclicked_buttonCoefficientDown();
		void onpbtnclicked_buttonCoefficientUp();
		void onpbtnclicked_buttonCoefficient2Down();
		void onpbtnclicked_buttonCoefficient2Up();

protected:
	QString getFrameName();
	QString getVersion();
	void FastTimerLoop();
	void SlowTimerLoop();
	bool readLastTimeStatus();
	bool saveLastTimeStatus();
	bool showFrame();
	bool hideFrame();
	void setPermission(short type);
/******************************************/
public:
	bool statusSystem;
	double dValuePressureNow;
	double dValuePressureSet;
	double dValueCoefficient;
	double dValueCoefficient2;

private:
	Ui::supportClass ui;
	/******************************************/
};

#endif // SUPPORT_H
