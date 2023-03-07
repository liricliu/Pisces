#ifndef PFILEFORM_H
#define PFILEFORM_H

#include <QMainWindow>

namespace Ui {
class PiscesFileForm;
}

class PiscesFileForm : public QMainWindow
{
    Q_OBJECT

public:
    explicit PiscesFileForm(QWidget *parent = nullptr);
    ~PiscesFileForm();

private:
    Ui::PiscesFileForm *ui;
};

#endif // PFILEFORM_H
