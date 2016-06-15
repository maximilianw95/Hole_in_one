#ifndef BLOCK_H
#define BLOCK_H
#include"Box2D/Box2D.h"
#include"QGraphicsItem"
#include<QPointF>

class MainWindow;

class Block
{
public:
    Block(b2World *world, QGraphicsScene *level, b2Vec2 center, qreal angle, qreal length, qreal width, b2BodyType type, qreal friction);
    void draw();
    void drawGraphics();
    void drawRec(int x,int y);

    b2Body* body;
    QGraphicsItem* graphics;

private:

};

#endif // BLOCK_H
