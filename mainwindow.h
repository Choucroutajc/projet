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





namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
//    QGraphicsScene *scene;
    QGraphicsView *view;

};

#endif // MAINWINDOW_H
