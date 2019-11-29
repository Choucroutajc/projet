#ifndef TEST_H
#define TEST_H

#include <QGraphicsItem>

class test : public QGraphicsItem
{
public:
    test();
    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);

private:
   //dimensions cadran
   QRectF rec0 = QRectF(0,0, 2.0, 2.0);
};

#endif // TEST_H
