#include "aiguille.h"
#include <QGraphicsItem>
#include <QPainter>
#include <QSlider>

aiguille::aiguille()
{
    setFlag(ItemIsMovable);

    S1->setRange(0,500);

    //connect(S1,SIGNAL(sliderMoved(int)),this,SLOT(setValue()));
}
QRectF aiguille::boundingRect() const
{
    return QRectF(rec1);
}

void aiguille::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{

for (int i = 0; i < 12; ++i)
{
    painter->drawLine(88, 0, 96, 0);
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

//void aiguille::RotateAiguille()
//{
//    float sliderValue = GetComponent<S1>().value;
//    ObjectToRotate.transform.rotation = Quaternion.Euler(sliderValue * 360, 0, 90);

//}

