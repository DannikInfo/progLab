//
// Created by Данил Козловский on 2019-03-27.
//

#ifndef INC_2_RECTANGLE_H
#define INC_2_RECTANGLE_H

#include "Vec2I.h"

class rectangle {
public:
    rectangle();
    rectangle(Vec2I a, Vec2I b, Vec2I c, Vec2I d);
    Vec2I getA();
    Vec2I getB();
    Vec2I getC();
    Vec2I getD();
    void move(int x);
    void move(int x, int y);
};

#endif //INC_2_RECTANGLE_H
