#ifndef PDEBUGFORM_H
#define PDEBUGFORM_H

#include <QWidget>

namespace Ui {
class PiscesDebugForm;
}

class PiscesDebugForm : public QWidget
{
    Q_OBJECT

public:
    explicit PiscesDebugForm(QWidget *parent = nullptr);
    ~PiscesDebugForm();

private:
    Ui::PiscesDebugForm *ui;
};

#endif // PDEBUGFORM_H
