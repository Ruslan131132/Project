<<<<<<< HEAD
=======
<<<<<<< HEAD
>>>>>>> Измененные для спрайта файлы
#ifndef SPRITE_H
#define SPRITE_H
#include "rectangle.h"

class Sprite
{
public:
    bool isDead();
    Sprite();
};

#endif // SPRITE_H
<<<<<<< HEAD
=======
=======
#pragma once

#include <QImage>
#include <QRect>

class Sprite {

  public:
    Sprite();
    ~Sprite();

  public:
   virtual QRect getRect();
   virtual QImage & getImage();

  private:
    QImage image;
    QRect rect;
};
>>>>>>> all docoments that i changed
>>>>>>> Измененные для спрайта файлы
