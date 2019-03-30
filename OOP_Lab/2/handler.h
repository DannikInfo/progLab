//
// Created by Данил Козловский on 2019-03-27.
//

#ifndef INC_2_HANDLER_H
#define INC_2_HANDLER_H

#include "triangle.h"
#include "rectangle.h"

class handler {
public:
    bool intersect(triangle *tr, rectangle *re);
    bool intersect(Vec2I a, Vec2I b, Vec2I c, Vec2I d);
};


#endif //INC_2_HANDLER_H
