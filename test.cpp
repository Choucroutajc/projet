#include "test.h"
#include <QGraphicsItem>
#include <QPainter>
#include <QtMath>

test::test()
{}

QRectF test::boundingRect() const
{
    return QRectF(rec0);
}

void test::paint(QPainter *t, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    t->setPen(QPen(QBrush("black"), 10 ,Qt::SolidLine, Qt::FlatCap));
    t->setBrush(Qt::red);  //rempli rouge
    t->drawRect(rec0);
}
