#ifndef CIRCLE_H
#define CIRCLE_H
#include "Box2D/Box2D.h"
#include"QGraphicsItem"
#include<QPointF>
#include "meinelement.h"

class Circle : public QObject
{

public:
    Circle(b2World *world, QGraphicsScene *level, QPointF position, qreal angle, b2BodyType type, b2CircleShape &circle,QString mode);

    void createCircle(b2World world, QGraphicsScene levelscene, QPointF pos, qreal angle, b2BodyType type, b2CircleShape &circle);
    void draw();

    b2Body* body;
    QGraphicsItem* graphics;
    bool drawBall1(); //123... for detecting win situation for different levels

    void drawGraphics();
};

#endif // CIRCLE_H
