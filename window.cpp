#include "window.h"

void Window::setupUi(QMainWindow *MainWindow)
{
    if (MainWindow->objectName().isEmpty())
        MainWindow->setObjectName(QStringLiteral("Школьная шпаргалка"));
    MainWindow->setGeometry(0,0,
                QApplication::desktop()->screenGeometry().width(),
                QApplication::desktop()->screenGeometry().height()
                );
    setWindowTitle(tr("Школьная шпаргалка"));
    setWindowIcon(QIcon(":/icon/cheat.ico"));
    centralWidget = new QWidget(MainWindow);
    centralWidget->setObjectName(QStringLiteral("centralWidget"));
    gridLayout = new QGridLayout(centralWidget);
    gridLayout->setSpacing(5);
    gridLayout->setContentsMargins(11, 11, 11, 11);
    gridLayout->setObjectName(QStringLiteral("gridLayout"));
    gridLayout->setContentsMargins(10, 10, 10, 10);
    scrollArea = new QScrollArea(centralWidget);
    scrollArea->setObjectName(QStringLiteral("scrollArea"));
    scrollArea->setWidgetResizable(true);
    scrollAreaWidgetContents = new QWidget();
    scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
    scrollAreaWidgetContents->setGeometry(QRect(0, 0, 548, 1274));
    formLayout = new QFormLayout(scrollAreaWidgetContents);
    formLayout->setSpacing(6);
    formLayout->setContentsMargins(11, 11, 11, 11);
    formLayout->setObjectName(QStringLiteral("formLayout"));
    formLayout->setContentsMargins(10, 10, 10, 200);

    int SCREENWIDTH = MainWindow->width();
    //int SCREENHEIGHT = MainWindow->height();
    //qDebug() << SCREENWIDTH<< " " << SCREENHEIGHT;

    label = new QLabel(scrollAreaWidgetContents);
    label->setObjectName(QStringLiteral("label"));
    label->setEnabled(true);
    QPixmap *pict = new QPixmap(":/sources/algebra.png");
    label->setPixmap(pict->scaled(SCREENWIDTH-90,pict->height()*(SCREENWIDTH-90)/pict->width()));
    //label->setPixmap(*pict);
    formLayout->setWidget(0, QFormLayout::FieldRole, label);
    scrollArea->setWidget(scrollAreaWidgetContents);
    gridLayout->addWidget(scrollArea, 0, 0, 1, 1);
    MainWindow->setCentralWidget(centralWidget);
    QMetaObject::connectSlotsByName(MainWindow);
}

Window::Window(QWidget *parent) :
    QMainWindow(parent)
{
    setupUi(this);
    //QBasicTimer ticker = 1;
}

Window::~Window() {
}

//void QTimerEvent (QTimer *) {
//
//}

//void Window::mouseReleaseEvent(QMouseEvent *event)
//{

//}











/*

#include <QLabel>
#include <QTextEdit>
#include <QPushButton>
#include <QIcon>
#include <QScrollArea>
#include <QPixmap>
#include <QImage>

Window::~Window() {} //деструктор

Window::Window(QWidget *parent):QMainWindow(parent)
{    
    QWidget *Window = new QWidget();
    centralWidget = new QWidget(Window);
    centralWidget->setObjectName(QStringLiteral("centralWidget"));
    gridLayout = new QGridLayout(centralWidget);
    gridLayout->setSpacing(5);
    gridLayout->setContentsMargins(11, 11, 11, 11);
    gridLayout->setObjectName(QStringLiteral("gridLayout"));
    gridLayout->setContentsMargins(10, 10, 10, 10);
    scrollArea = new QScrollArea(centralWidget);
    scrollArea->setObjectName(QStringLiteral("scrollArea"));
    scrollArea->setWidgetResizable(true);
    scrollAreaWidgetContents = new QWidget();
    scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
    scrollAreaWidgetContents->setGeometry(QRect(0, 0, 548, 1274));
    formLayout = new QFormLayout(scrollAreaWidgetContents);
    formLayout->setSpacing(6);
    formLayout->setContentsMargins(11, 11, 11, 11);
    formLayout->setObjectName(QStringLiteral("formLayout"));
    formLayout->setContentsMargins(10, 10, 10, 200);
    label = new QLabel(scrollAreaWidgetContents);
    label->setObjectName(QStringLiteral("label"));
    label->setEnabled(true);
    label->setPixmap(QPixmap(QString::fromUtf8(":/sources/intergral.png")));

    formLayout->setWidget(0, QFormLayout::FieldRole, label);

    scrollArea->setWidget(scrollAreaWidgetContents);

    gridLayout->addWidget(scrollArea, 0, 0, 1, 1);


    //Window->setCentralWidget(*centralWidget);

    //retranslateUi(MainWindow);

    //QMetaObject::connectSlotsByName(MainWindow);









//    QWidget *window = new QWidget();
//    setCentralWidget(window);
//    setFixedSize(500,400);
//    setMinimumSize(500, 400);
//    setWindowTitle(tr("Школьная шпаргалка"));
//    setWindowIcon(QIcon(":/icon/cheat.ico"));

//    QLabel *vb = new QLabel();
//    vb->setAlignment(Qt::AlignCenter);
//    QImage image(":/sources/intergral.png");
//    vb->setPixmap(QPixmap::fromImage(image));


//    QHBoxLayout *layout = new QHBoxLayout;
//    layout->addWidget(vb);



    //
//    QTextEdit *ple = new QTextEdit(this);
//    ple->setGeometry(10,10, 390, 350);
//    QPushButton *ppb = new QPushButton(tr("Run"), this);
//    ppb->setGeometry(30, 365, 400, 24);




}*/
