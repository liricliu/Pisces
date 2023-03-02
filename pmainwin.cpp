#include "pmainwin.h"
#include "ui_pmainwin.h"
#include "qfile.h"

PiscesMainWin::PiscesMainWin(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::PiscesMainWin)
{
    ui->setupUi(this);
}

PiscesMainWin::~PiscesMainWin()
{
    delete ui;
}
