#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QGraphicsItem>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QtCore>
#include <QtGui>

#include "cadran.h"
#include "aiguille.h"
#include "arc.h"
#include "test.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
//    QGraphicsScene *scene;
    QGraphicsView *view;
};

#endif // MAINWINDOW_H
