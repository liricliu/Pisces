#include "thirdparty/qui/quiwidget.h"
#include "ui/pmainwin.h"
//#include "demo/appinit.h"
#include <QApplication>

int main(int argc, char *argv[])
{
#if (QT_VERSION >= QT_VERSION_CHECK(5,6,0))
    QApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
    QApplication::setAttribute(Qt::AA_UseHighDpiPixmaps);
#endif
    QApplication a(argc, argv);
    a.setFont(QFont("Microsoft Yahei", 9));
    a.setWindowIcon(QIcon(":/icon.png"));


    QUIWidget::setCode();
    QUIWidget::setTranslator(":/image/qt_zh_CN.qm");
    QUIWidget::setTranslator(":/image/widgets.qm");
    //AppInit::Instance()->start();

    //读取配置文件
    //QUIConfig::ConfigFile = QString("%1/%2").arg(QUIWidget::appPath()).arg("qui_config.ini");
    //QUIConfig::ReadConfig();

    QUIWidget qui;
    //PiscesMainWin *creator = new PiscesMainWin;

    //设置主窗体
    //qui.setMainWidget(creator);
    //QObject::connect(&qui, SIGNAL(changeStyle(QString)), creator, SLOT(changeStyle(QString)));
    qui.setStyle(QUIWidget::Style::Style_FlatBlack);
    //设置标题

    qui.setTitle("Pisces");

    //设置标题文本居中
    qui.setAlignment(Qt::AlignCenter);

    //设置窗体可拖动大小
    qui.setSizeGripEnabled(true);

    //设置换肤下拉菜单可见
    qui.setVisible(QUIWidget::BtnMenu, true);

    //设置标题栏高度
    qui.setTitleHeight(60);

    //设置按钮宽度
    qui.setBtnWidth(60);

    //设置左上角图标-图形字体
    //qui.setIconMain(QChar(0xf099), 11);

    //设置左上角图标-图片文件
    //qui.setPixmap(QUIWidget::Lab_Ico, ":/icon.png");

    qui.setMax();

    qui.show();

    return a.exec();
}
