#include "cadran.h"
#include <QPainter>
#include <QtMath>
#include <QDebug>

cadran::cadran()
{
    setFlag(ItemIsMovable);
}
QRectF cadran::boundingRect() const
{
    return QRectF(rec);
}

void cadran::paint(QPainter *p, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
//    for (int i = 0; i < 12; ++i)
//    {
//              p->drawLine(88, 0, 96, 0);
//              p->rotate(30.0);
//          }


    p->setPen(QPen(QBrush("black") , 10 , Qt::SolidLine,Qt::FlatCap));

    //p->setBrush(QColor(10,230,50)); //rempli vert
    //p->setBrush(Qt::red);  //rempli rouge


    QBrush b1( Qt::red, Qt::Dense4Pattern );
    p->setBrush(b1);
    p->drawEllipse(rec);




    //p->scale(qreal sx 10,qreal sy 50);
//    static const QPoint minuteHand[3] =
//    {
//              QPoint(7, 8),
//              QPoint(-7, 8),
//              QPoint(0, -70)

//};

//    for (int i = 0; i < 12; ++i)
//    {
//              p->drawLine(88, 0, 96, 0);
//              p->rotate(30.0);
//          }

//          p->setPen(Qt::NoPen);
//          p->setBrush(Qt::black);

//          p->save();
//          p->rotate(6.0 * (x() + y() / 60.0));
//          p->drawConvexPolygon(minuteHand, 3);
//          p->restore();

//          p->setPen(Qt::black);

//          for (int j = 0; j < 60; ++j) {
//              if ((j % 5) != 0)
//                  p->drawLine(92, 0, 96, 0);
//              p->rotate(6.0);
//          }


}
