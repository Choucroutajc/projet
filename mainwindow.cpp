#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "cadran.h"
#include "aiguille.h"
#include "arc.h"
#include "test.h"

#include <QGraphicsView>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //mise en place de la scene avec constructeur QGraphicsScene
    QGraphicsScene *scene = new QGraphicsScene(this);

    ui->graphicsView->setScene(scene);
    //!ui->graphicsView->setSceneRect(50, 50, 350, 350);
    //affichage
    ui->graphicsView->setRenderHint(QPainter::Antialiasing);

    cadran * c = new cadran;
    scene->addItem(c);

    aiguille *a = new aiguille;
    scene->addItem(a);
    //ui->S1->setParent(ui->MainWindow);

    arc* r = new arc;
    scene->addItem(r);

    test* s = new test;
    scene->addItem(s);
    //scene->itemAt()
    //scene->

    // get the position relative to the scene

    //QPointF sp = item->scenePos();
    // or use

    //QPointF test = s->mapToScene(s->pos()); //variable 'test' set but not used

    //QPointF current_pos = test->test().s();

    // find the global (screen) position of the item

    //QPoint global = view->mapToGlobal(s->mapFromScene());

    // now

    //myContextMenu.exec(global);
    //QPointF s0 = scene()->scenePos();
    //QGraphicsItem *rec0 =scene->itemAt(50, 50);
    //QGraphicsItem *test = scene->itemAt(50, 50);
    //s->scenePos();
}

MainWindow::~MainWindow()
{
    delete ui;
}
