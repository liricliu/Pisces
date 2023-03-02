#ifndef PMAINWIN_H
#define PMAINWIN_H

#include <QMainWindow>

namespace Ui {
class PiscesMainWin;
}

class PiscesMainWin : public QMainWindow
{
    Q_OBJECT

public:
    explicit PiscesMainWin(QWidget *parent = nullptr);
    ~PiscesMainWin();

private:
    Ui::PiscesMainWin *ui;
};

#endif // PMAINWIN_H
