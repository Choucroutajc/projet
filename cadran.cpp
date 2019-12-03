#include "cadran.h"
#include <Qt>
#include <QtCore>
#include <math.h>
#include <QDebug>
#include <QPainter>

int A = 500;
int B = 500;
QRectF rec     = QRectF(0,0, A, B);
int startAngle = 30 * 16;
int spanAngle  = 120 * 16;

QRectF recT     = QRectF(0,0, A/10, B/10);

cadran::cadran()
{
  //  textLabel = "km/h";
}

QRectF cadran::boundingRect() const
{
    return QRectF(rec);
}

void cadran::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    ellipse(painter, rec);
    aiguille(painter, rec);
    graduation(painter,recT);
}

void cadran::ellipse(QPainter *painter, QRectF)
{
    painter->setPen(QPen(QBrush("black") , 10 , Qt::SolidLine,Qt::FlatCap));

    QBrush b1( Qt::red, Qt::Dense4Pattern );
    painter->setBrush(b1);
    painter->drawEllipse(rec);
    painter->drawText(A/2-10,A/2+30, "km/h");
}

void cadran::aiguille(QPainter *painter, QRectF)
{
    painter->setPen(QPen(QBrush("yellow") , 5 , Qt::SolidLine,Qt::FlatCap));
    painter->translate(A/2, B/2);
    painter->scale(1, -1);
//grde graduation
        for (int i = 0; i < 12; ++i)
            {
                painter->drawLine(A/2+20,0,A/2-20,0);
                painter->rotate(30.0);

            }
//petite graduation
            for (int j = 0; j < 60; j++)
            {
                if((j %5) != 0)
                painter->drawLine(A/2, 0, A/2-20, 0);
                painter->rotate(6.0);
           }

//             angle en radian degre*pi/180
//            d(A,B) = sqrt ( sum ( A(i,j)-B(i,j) )^2 );

//        painter->translate(500/2, 500/2);
//        painter->scale(1, -1);
            int r =  A/2           ;
            //changer angle change l'aiguille
            float angled = 170;
            float angler = qDegreesToRadians(angled);
            int x = r*qCos(angler);
            int y = r*qSin(angler);

            static const QPoint bout[3] =
            {
                QPoint(7, 8),
                QPoint(3, 8),
                QPoint(x, y)
            };
                painter->setPen(QPen(QBrush("yellow") , 5 , Qt::SolidLine,Qt::FlatCap));
                QBrush ba1( Qt::red, Qt::Dense4Pattern );
                painter->setBrush(ba1);
                painter->drawConvexPolygon(bout, 3);

}

void cadran::graduation(QPainter *painter, QRectF)
{
    //painter->restore();
    painter->setPen(QPen(QBrush("red") , 5 , Qt::SolidLine,Qt::FlatCap));

        for (int k = 0; k <=12 /*graduations*/ ; ++k)
        {

                painter->rotate(30.0);

                //painter->drawText(A/2-50,0,"kkk");
                //painter->translate();
                //painter->drawStaticText(0,0, ));

                painter->drawText(recT, Qt::AlignCenter, "Qt");
               // painter->drawText(A/2-50,0,"kkk");
               // painter->restore();
            }
}
