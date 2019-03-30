//
// Created by Данил Козловский on 2019-03-27.
//

#include "triangle.h"

Vec2I a;
Vec2I b;
Vec2I c;

triangle::triangle(){
    a.setTo(1, 1);
    b.setTo(1, 3);
    c.setTo(3, 1);
}

triangle::triangle(Vec2I aG, Vec2I bG, Vec2I cG){
    a = aG;
    b = bG;
    c = cG;
}

Vec2I triangle::getA(){
    return a;
}

Vec2I triangle::getB(){
    return b;
}

Vec2I triangle::getC(){
    return c;
}

void triangle::move(int x){
    a.add(x);
    b.add(x);
    c.add(x);
}

void triangle::move(int x, int y){
    a.add(x, y);
    b.add(x, y);
    c.add(x, y);
}




