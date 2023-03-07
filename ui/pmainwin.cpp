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
    ui->stackedWidget->addWidget(fileform);
    ui->stackedWidget->addWidget(debugform);
    ui->stackedWidget->setCurrentIndex(0);
}

PiscesMainWin::~PiscesMainWin()
{
    delete fileform;
    delete debugform;
    delete ui;
}
