<<<<<<< HEAD
=======
<<<<<<< HEAD
>>>>>>> Измененные для спрайта файлы
#ifndef BRICK_H
#define BRICK_H
#include "stationarysprite.h"

class Brick: private StationarySprite
{
public:
    Brick();
};

#endif // BRICK_H
<<<<<<< HEAD
=======
=======
#pragma once

#include <QImage>
#include <QRect>
#include <sprite.h>

class Brick : public Sprite{

  public:
    Brick(int, int);
    ~Brick();

  public:
    bool isDestroyed();
    void setDestroyed(bool);
    QRect getRect() override;
    void setRect(QRect) ;
    QImage & getImage() override;

  private:
    QImage image;
    QRect rect;
    bool destroyed;
};
>>>>>>> all docoments that i changed
>>>>>>> Измененные для спрайта файлы
