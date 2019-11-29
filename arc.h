#ifndef ARC_H
#define ARC_H

#include <QGraphicsItem>

class arc : public QGraphicsItem
{
public:
    arc();
    QRectF boundingRect() const;
    void paint(QPainter *pa, const QStyleOptionGraphicsItem *option, QWidget *widget);

private:
    QRectF rec2 = QRectF(100,0, 100.0, 100.0);
    int startAngle = 30 * 16;
    int spanAngle = 120 * 16;
};

#endif // ARC_H
