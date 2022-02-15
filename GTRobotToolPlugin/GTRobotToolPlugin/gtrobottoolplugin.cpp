#include "qstring.h"

#include "gtrobottoolplugin.h"
#include "gtrobot_backend_define.h"
#include "gtrobot_backend_interface.h"

#include "interface.h"

Support::Support(QWidget *parent){
	ui.setupUi(this);
	bciHydraulicSystemInit();
	this->statusSystem = false;
	this->dValuePressureNow = 0;
	this->dValuePressureSet = 0;
	this->dValueCoefficient = 0;
	this->dValueKp = 0;
	this->dValueKi = 0;
	this->dValueKd = 0;
	this->signal_slot_connect();
	bciHydraulicSystemInit();
	GTR_RegisterPlcLoop(1,bciHydraulicSystemPIDControl);
}
Support::~Support(){
}
bool Support::showFrame(){
	this->show();
	return true;
}
bool Support::hideFrame(){
	this->hide();
	return true;
}
void Support::SlowTimerLoop(){
}
void Support::FastTimerLoop(){
	this->dValuePressureNow = bciHydraulicSystemPressureShow();
	bciHydraulicSystemPressureSend();
	ui.lcdCoefficient->display(dValueCoefficient);
	ui.lcdPressureNow->display(dValuePressureNow);
	ui.lcdPressureSet->display(dValuePressureSet);
	ui.lcdKp->display(dValueKp);
	ui.lcdKi->display(dValueKi);
	ui.lcdKd->display(dValueKd);
}

QString Support::getFrameName(){
	return "Support";
}
QString Support::getVersion(){
	return "v1.0.0";
}

bool Support::readLastTimeStatus(){
	return true;
}

bool Support::saveLastTimeStatus(){
	return true;
}

void Support::setPermission(short type){
}
/*****************************************/
void Support::signal_slot_connect(){
	connect(ui.buttonSystemEnable,SIGNAL(clicked()),this,SLOT(onpbtnclicked_buttonSystemEnable()));
	connect(ui.buttonSystemReset,SIGNAL(clicked()),this,SLOT(onpbtnclicked_buttonSystemReset()));
	connect(ui.buttonSensorZero,SIGNAL(clicked()),this,SLOT(onpbtnclicked_buttonSensorZero()));
	connect(ui.buttonPressureDown,SIGNAL(clicked()),this,SLOT(onpbtnclicked_buttonPressureDown()));
	connect(ui.buttonPressureUp,SIGNAL(clicked()),this,SLOT(onpbtnclicked_buttonPressureUp()));
	connect(ui.buttonCoefficientDown,SIGNAL(clicked()),this,SLOT(onpbtnclicked_buttonCoefficientDown()));
	connect(ui.buttonCoefficientUp,SIGNAL(clicked()),this,SLOT(onpbtnclicked_buttonCoefficientUp()));
	connect(ui.buttonKpDown,SIGNAL(clicked()),this,SLOT(onpbtnclicked_buttonKpDown()));
	connect(ui.buttonKpUp,SIGNAL(clicked()),this,SLOT(onpbtnclicked_buttonKpUp()));
	connect(ui.buttonKiDown,SIGNAL(clicked()),this,SLOT(onpbtnclicked_buttonKiDown()));
	connect(ui.buttonKiUp,SIGNAL(clicked()),this,SLOT(onpbtnclicked_buttonKiUp()));
	connect(ui.buttonKdDown,SIGNAL(clicked()),this,SLOT(onpbtnclicked_buttonKdDown()));
	connect(ui.buttonKdUp,SIGNAL(clicked()),this,SLOT(onpbtnclicked_buttonKdUp()));
}


void Support::onpbtnclicked_buttonSystemEnable(){
	this->statusSystem = true;
	bciHydraulicSystemStatusSet(true);
	ui.labelSystemStatsu->setText("Ê¹ÄÜ");
}
void Support::onpbtnclicked_buttonSystemReset(){
	this->statusSystem = false;
	bciHydraulicSystemStatusSet(false);
	ui.labelSystemStatsu->setText("¸´Î»");
}

void Support::onpbtnclicked_buttonSensorZero(){
	this->dValuePressureNow = 0;
}

void Support::onpbtnclicked_buttonPressureDown(){
	this->dValuePressureSet = dValuePressureSet - 100;
	bciHydraulicSystemPressureSet(dValuePressureSet);
}
void Support::onpbtnclicked_buttonPressureUp(){
	this->dValuePressureSet = dValuePressureSet + 100;
	bciHydraulicSystemPressureSet(dValuePressureSet);
}

void Support::onpbtnclicked_buttonCoefficientDown(){
	this->dValueCoefficient = dValueCoefficient - 0.1;
}
void Support::onpbtnclicked_buttonCoefficientUp(){
	this->dValueCoefficient = dValueCoefficient + 0.1;
}

void Support::onpbtnclicked_buttonKpDown(){
	this->dValueKp = dValueKp - dValueCoefficient;
	bciHydraulicSystemCoefficient(dValueKp,dValueKi,dValueKd);
}
void Support::onpbtnclicked_buttonKiDown(){
	this->dValueKi = dValueKi - dValueCoefficient;
	bciHydraulicSystemCoefficient(dValueKp,dValueKi,dValueKd);
}
void Support::onpbtnclicked_buttonKdDown(){
	this->dValueKd = dValueKd - dValueCoefficient;
	bciHydraulicSystemCoefficient(dValueKp,dValueKi,dValueKd);
}
void Support::onpbtnclicked_buttonKpUp(){
	this->dValueKp = dValueKp + dValueCoefficient;
	bciHydraulicSystemCoefficient(dValueKp,dValueKi,dValueKd);
}
void Support::onpbtnclicked_buttonKiUp(){
	this->dValueKi = dValueKi + dValueCoefficient;
	bciHydraulicSystemCoefficient(dValueKp,dValueKi,dValueKd);
}
void Support::onpbtnclicked_buttonKdUp(){
	this->dValueKd = dValueKd + dValueCoefficient;
	bciHydraulicSystemCoefficient(dValueKp,dValueKi,dValueKd);
}
/*****************************************/

Q_EXPORT_PLUGIN2("RobotHmi",Support);