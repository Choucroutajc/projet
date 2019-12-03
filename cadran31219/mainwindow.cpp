#include "mainwindow.h"
#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QGraphicsScene *scene = new QGraphicsScene(this);
    ui->graphicsView->setScene(scene);

    cadran * c = new cadran;
    scene->addItem(c);
    //scene->addText("Km/h");
    //connect(ui->horizontalSlider,SIGNAL(actionTriggered(int)),this,SLOT(vitesse()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

//void MainWindow::vitesse()
//{
//    vitesse()->angle=ui->horizontalSlider->value();
//    scene->update();
//}
