#include "pdebugform.h"
#include "ui_pdebugform.h"

PiscesDebugForm::PiscesDebugForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::PiscesDebugForm)
{
    ui->setupUi(this);
}

PiscesDebugForm::~PiscesDebugForm()
{
    delete ui;
}
