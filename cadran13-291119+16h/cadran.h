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
    void arc(QPainter *painter, QRectF);
private:
      QRectF rec     = QRectF(0,0, 200.0, 200.0);
      int startAngle = 30 * 16;
      int spanAngle  = 120 * 16;
};

#endif // CADRAN_H
