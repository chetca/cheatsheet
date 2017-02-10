#ifndef WINDOW_H
#define WINDOW_H

#include <QtCore/QVariant>
#include <QAction>
#include <QApplication>
#include <QButtonGroup>
#include <QFormLayout>
#include <QGridLayout>
#include <QHeaderView>
#include <QLabel>
#include <QMainWindow>
#include <QScrollArea>
#include <QWidget>
#include <QPixmap>

namespace Ui {
class MainWindow;
}

class Window : public QMainWindow
{
    Q_OBJECT

public:
    Window(QWidget *parent = 0);
    ~Window();

    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QFormLayout *formLayout;
    QLabel *label;

    void setupUi(QMainWindow *MainWindow); // setupUi
    };

#endif // WINDOW_H
