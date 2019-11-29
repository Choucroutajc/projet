#include "arc.h"

#include <QPainter>
#include <QSlider>

arc::arc()
{
    setFlag(ItemIsMovable);
    QSlider *S2 = new QSlider(Qt::Horizontal, nullptr);
//    connect(S2, SIGNAL(sliderMoved(int)), this, SLOT())
}

QRectF arc::boundingRect() const
{
    return QRectF(rec2);
}

void arc::paint(QPainter *pa, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    for (int i = 0; i < 3; ++i) {
        pa->drawLine(88, 0, 96, 0);
        pa->rotate(30.0);
    }

    for (int j = 0; j < 15; ++j) {
        pa->drawLine(92, 0, 96, 0);
        pa->rotate(6.0);
    }

    static const QPoint bout[3] = {
        QPoint(7, 8),
        QPoint(-7, 8),
        QPoint(0, -70)
    };

    QBrush ba1(Qt::yellow, Qt::Dense4Pattern);
    pa->setBrush(ba1);
    pa->drawConvexPolygon(bout, 3);

    pa->setPen(QPen(QBrush("red"), 10, Qt::SolidLine, Qt::FlatCap));
    pa->drawArc(rec2, startAngle, spanAngle);

    pa->rotate(180.0);

    pa->setPen(QPen(QBrush("green"), 5, Qt::DashLine, Qt::FlatCap));
    pa->drawChord(rec2, startAngle, spanAngle);
}
