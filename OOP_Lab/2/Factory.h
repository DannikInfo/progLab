//
// Created by Данил Козловский on 2019-03-28.
//

#ifndef INC_2_FACTORY_H
#define INC_2_FACTORY_H

#include "triangle.h"
#include "rectangle.h"

class Factory {
public:
    triangle* addObjectTr();
    rectangle* addObjectRe();
    void deleteObjects(rectangle *re, triangle *tr);
};


#endif //INC_2_FACTORY_H
