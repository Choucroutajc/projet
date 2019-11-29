#ifndef CADRAN_H
#define CADRAN_H

#include <QGraphicsItem>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QPainter>
#include <QColor>
#include <QDebug>

class cadran : public QGraphicsItem
{
public:
    cadran();
    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
    void ellipse(QRectF ellipse);

private:
   //dimensions cadran
   QRectF rec      = QRectF(0,0, 200.0, 200.0);

};

#endif // CADRAN_H
