#include "pfileform.h"
#include "ui_pfileform.h"

PiscesFileForm::PiscesFileForm(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::PiscesFileForm)
{
    ui->setupUi(this);
}

PiscesFileForm::~PiscesFileForm()
{
    delete ui;
}
