#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "cadran.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QGraphicsScene *scene = new QGraphicsScene(this);
    ui->graphicsView->setScene(scene);


    cadran * c = new cadran;
    scene->addItem(c);
    //scene->pos
}

MainWindow::~MainWindow()
{
    delete ui;
}
