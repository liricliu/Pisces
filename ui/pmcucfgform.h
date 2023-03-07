#ifndef PMCUCFGFORM_H
#define PMCUCFGFORM_H

#include <QMainWindow>

namespace Ui {
class PiscesMCUCfgForm;
}

class PiscesMCUCfgForm : public QMainWindow
{
    Q_OBJECT

public:
    explicit PiscesMCUCfgForm(QWidget *parent = nullptr);
    ~PiscesMCUCfgForm();

private:
    Ui::PiscesMCUCfgForm *ui;
};

#endif // PMCUCFGFORM_H
