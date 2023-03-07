#ifndef PMAINWIN_H
#define PMAINWIN_H

#include <QMainWindow>
#include "ui/pdebugform.h"
#include "ui/pfileform.h"

namespace Ui {
class PiscesMainWin;
}

class PiscesMainWin : public QMainWindow
{
    Q_OBJECT

public:
    explicit PiscesMainWin(QWidget *parent = nullptr);
    ~PiscesMainWin();
    PiscesFileForm* fileform;
    PiscesDebugForm* debugform;

private:
    Ui::PiscesMainWin *ui;
};

#endif // PMAINWIN_H
