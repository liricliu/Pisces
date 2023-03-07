#include "paboutdialog.h"
#include "ui_paboutdialog.h"

PiscesAboutDialog::PiscesAboutDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::PiscesAboutDialog)
{
    ui->setupUi(this);
    setFixedSize(600,450);
}

PiscesAboutDialog::~PiscesAboutDialog()
{
    delete ui;
}
