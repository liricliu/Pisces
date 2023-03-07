#include "pmainwin.h"
#include "ui_pmainwin.h"
#include "qfile.h"

PiscesMainWin::PiscesMainWin(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::PiscesMainWin)
{
    ui->setupUi(this);
    fileform=new PiscesFileForm;
    debugform=new PiscesDebugForm;
    mcucfgform=new PiscesMCUCfgForm;

    ui->stackedWidget->addWidget(fileform);
    ui->stackedWidget->addWidget(mcucfgform);
    ui->stackedWidget->addWidget(debugform);
    ui->stackedWidget->setCurrentIndex(0);
}

PiscesMainWin::~PiscesMainWin()
{
    delete fileform;
    delete debugform;
    delete mcucfgform;
    delete ui;
}

void PiscesMainWin::setIndex(int x){
    ui->stackedWidget->setCurrentIndex(x);
}
