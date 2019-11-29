#ifndef AIGUILLE_H
#define AIGUILLE_H

#include <QGraphicsItem>
#include <QSlider>

class aiguille : public QGraphicsItem
{
public:
    aiguille();
    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
    QSlider *S1 = new QSlider(Qt::Horizontal, nullptr);
    void RotateAiguille();

private:
    QRectF rec1 = QRectF(0, 0, 200.0, 200.0);
};

#endif // AIGUILLE_H
