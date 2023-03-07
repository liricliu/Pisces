#ifndef PABOUTDIALOG_H
#define PABOUTDIALOG_H

#include <QDialog>

namespace Ui {
class PiscesAboutDialog;
}

class PiscesAboutDialog : public QDialog
{
    Q_OBJECT

public:
    explicit PiscesAboutDialog(QWidget *parent = nullptr);
    ~PiscesAboutDialog();

private:
    Ui::PiscesAboutDialog *ui;
};

#endif // PABOUTDIALOG_H
