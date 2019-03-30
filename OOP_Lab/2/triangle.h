//
// Created by Данил Козловский on 2019-03-27.
//

#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "Vec2I.h"


class triangle {
public:
    triangle();
    triangle(Vec2I aG, Vec2I bG, Vec2I cG);
    Vec2I getA();
    Vec2I getB();
    Vec2I getC();
    void move(int x);
    void move(int x, int y);
};

#endif //TRIANGLE_H
