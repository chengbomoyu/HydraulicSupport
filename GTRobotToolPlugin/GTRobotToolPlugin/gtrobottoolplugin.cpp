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
	this->dValueCoefficient = 0.1;
	this->dValueCoefficient2 = 0.1;
	this->signal_slot_connect();
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
	ui.lcdCoefficient2->display(dValueCoefficient2);
	ui.lcdPressureNow->display(dValuePressureNow);
	ui.lcdPressureSet->display(dValuePressureSet);

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
	connect(ui.buttonCoefficient2Down,SIGNAL(clicked()),this,SLOT(onpbtnclicked_buttonCoefficient2Down()));
	connect(ui.buttonCoefficient2Up,SIGNAL(clicked()),this,SLOT(onpbtnclicked_buttonCoefficient2Up()));

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
	bciHydraulicSystemPressureSetZero();
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
	if(dValueCoefficient <=0.1 ) dValueCoefficient = 0.1;
	bciHydraulicSystemCoefficient(dValueCoefficient,dValueCoefficient2);
}
void Support::onpbtnclicked_buttonCoefficientUp(){
	this->dValueCoefficient = dValueCoefficient + 0.1;
	if(dValueCoefficient >=5 ) dValueCoefficient = 5;
	bciHydraulicSystemCoefficient(dValueCoefficient,dValueCoefficient2);
}
void Support::onpbtnclicked_buttonCoefficient2Down(){
	this->dValueCoefficient2 = dValueCoefficient2 - 0.1;
	if(dValueCoefficient2 <=0.1 ) dValueCoefficient2 = 0.1;
	bciHydraulicSystemCoefficient(dValueCoefficient,dValueCoefficient2);
}
void Support::onpbtnclicked_buttonCoefficient2Up(){
	this->dValueCoefficient2 = dValueCoefficient2 + 0.1;
	if(dValueCoefficient2 >=5 ) dValueCoefficient2 = 5;
	bciHydraulicSystemCoefficient(dValueCoefficient,dValueCoefficient2);
}

/*****************************************/

Q_EXPORT_PLUGIN2("RobotHmi",Support);