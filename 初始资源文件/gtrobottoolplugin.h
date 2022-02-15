#ifndef SUPPORT_H
#define SUPPORT_H

#include <QtGui/QWidget>
#include "qstring.h"

#include "ui_supprot.h"
#include "gtappframeinterface.h"
#include "gtrobot_backend_define.h"
#include "comm_struct_define.h"
#include "robot_comm_interface.h"
#include "plc_standard_class.h"

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
		void onpbtnclicked_buttonKpDown();
		void onpbtnclicked_buttonKiDown();
		void onpbtnclicked_buttonKdDown();
		void onpbtnclicked_buttonKpUp();
		void onpbtnclicked_buttonKiUp();
		void onpbtnclicked_buttonKdUp();
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
	double dValueKp;
	double dValueKi;
	double dValueKd;
private:
	Ui::supportClass ui;
	/******************************************/
};

#endif // SUPPORT_H
