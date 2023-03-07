#include "pmcucfgform.h"
#include "ui_pmcucfgform.h"

PiscesMCUCfgForm::PiscesMCUCfgForm(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::PiscesMCUCfgForm)
{
    ui->setupUi(this);
}

PiscesMCUCfgForm::~PiscesMCUCfgForm()
{
    delete ui;
}
