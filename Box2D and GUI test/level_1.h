#ifndef LEVEL_1_H
#define LEVEL_1_H
#include"Box2D/Box2D.h"
#include <QMainWindow>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QTimer>
#include "meinelement.h"
#include <QPushButton>
#include <QGraphicsSceneMouseEvent>
#include <QElapsedTimer>
#include <QTime>

#define framerate 1.0/35.0  //2 framerates eines grafik eines physic nötig //TODO

class Level_1 : public QGraphicsView
{
    Q_OBJECT

public:
    Level_1(QWidget *parent = 0);
    //void displayLevel();


public slots:
    void update();
    void startLevel();
    void pauseLevel();
    void resumeLevel();
    void countObjects();
    void addRectangle();
    void addCircle();

private:
    b2World* myWorld;
    QGraphicsScene* level;
    //Elements to add
    MeinElement* elem4;
    MeinElement* elem5;
    MeinElement* elem6;
    MeinElement* circle1;
    MeinElement* circle2;
    MeinElement* circle3;
    //fixed Elements
    MeinElement* ball;
    MeinElement* kreis1;
    MeinElement* kreis2;
    MeinElement* rechteck1;
    MeinElement* bottom;
    QTimer* timer;
    int anzahl;
    b2Vec2 positionElem;
    QPushButton* bt_start;
    QPushButton* bt_pause;
    QPushButton* bt__resume;
    QElapsedTimer leveltime_elapsed;
    QTime leveltime_normal;
    QPushButton* bt__rect;
    QPushButton* bt__circle;
    int counterRec = 0;
    int counterCircle=0;

};

#endif // LEVEL_1_H
