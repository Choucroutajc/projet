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

    void ellipse(QPainter *painter, QRectF);
    void aiguille(QPainter *painter, QRectF);
//    void arc(QPainter *painter, QRectF);
//    void test(QPainter *painter, QRectF);
//    void frame(QPainter *painter, QRectF);


    void graduation(QPainter *painter, QRectF);
private:
    int graduations;
};

#endif // CADRAN_H
