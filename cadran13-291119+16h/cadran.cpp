#include "cadran.h"

cadran::cadran()
{

}

QRectF cadran::boundingRect() const
{
    return QRectF(rec);
}

//arc
void cadran::arc(QPainter *painter, QRectF)
{
    for (int i = 0; i < 3; ++i)
    {
        painter->drawLine(88, 0, 96, 0);
        painter->rotate(30.0);
    }

    for (int j = 0; j < 15; j++)
    {
        painter->drawLine(92, 0, 96, 0);
        painter->rotate(6.0);
    }

    static const QPoint bout[3] =
    {
        QPoint(7, 8),
        QPoint(-7, 8),
        QPoint(0, -70)
    };
        QBrush ba1( Qt::yellow, Qt::Dense4Pattern );
        painter->setBrush(ba1);
        painter->drawConvexPolygon(bout, 3);

        painter->setPen(QPen(QBrush("red"), 10, Qt::SolidLine, Qt::FlatCap ));
        painter->drawArc(rec,  startAngle, spanAngle);


        painter->rotate(180.0);

        painter->setPen(QPen(QBrush("green"), 5, Qt::DashLine, Qt::FlatCap));
        painter->drawChord(rec, startAngle, spanAngle);
}



//aiguille
void cadran::aiguille(QPainter *painter, QRectF)
{
    painter->setPen(QPen(QBrush("yellow") , 5 , Qt::SolidLine,Qt::FlatCap));
    for (int i = 0; i < 12; ++i)
        {
//            painter->drawLine(88, 0, 96, 0);

            //painter->drawLine();
            painter->rotate(30.0);
        }

        for (int j = 0; j < 60; j++)
        {
            painter->drawLine(92, 0, 96, 0);
            painter->rotate(6.0);
        }

        static const QPoint bout[3] =
        {
            QPoint(7, 8),
            QPoint(-7, 8),
            QPoint(0, -70)
        };
            QBrush ba1( Qt::red, Qt::Dense4Pattern );
            painter->setBrush(ba1);
            painter->drawConvexPolygon(bout, 3);

}

//ellipse
void cadran::ellipse(QPainter *painter, QRectF)
{
    painter->setPen(QPen(QBrush("black") , 10 , Qt::SolidLine,Qt::FlatCap));

    QBrush b1( Qt::red, Qt::Dense4Pattern );
    painter->setBrush(b1);
    painter->drawEllipse(rec);
}


void cadran::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    ellipse(painter, rec);
    aiguille(painter, rec);
    arc(painter,rec);
}





