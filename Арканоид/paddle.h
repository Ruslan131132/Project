<<<<<<< HEAD
=======
<<<<<<< HEAD
>>>>>>> Измененные для спрайта файлы
#ifndef PADDLE_H
#define PADDLE_H
#include "movablesprite.h"

class Paddle: private MovableSprite
{
public:
    Paddle();
};

#endif // PADDLE_H
<<<<<<< HEAD
=======
=======
#pragma once

#include <QImage>
#include <QRect>
#include <sprite.h>

class Paddle : public Sprite{

  public:
    Paddle();
    ~Paddle();

  public:
    void resetState();
    void move();
    void setDx(int);
    QRect getRect() override;
    QImage & getImage() override;

  private:
    QImage image;
    QRect rect;
    int dx;
    static const int INITIAL_X = 200;
    static const int INITIAL_Y = 360;
};
>>>>>>> all docoments that i changed
>>>>>>> Измененные для спрайта файлы
