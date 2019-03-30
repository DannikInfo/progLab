//
// Created by Данил Козловский on 2019-03-27.
//

#include "rectangle.h"

Vec2I aR;
Vec2I bR;
Vec2I cR;
Vec2I dR;

rectangle::rectangle(){
    aR.setTo(2, 1);
    bR.setTo(2, 3);
    cR.setTo(5, 3);
    dR.setTo(5, 1);
}

rectangle::rectangle(Vec2I a, Vec2I b, Vec2I c, Vec2I d){
    aR = a;
    bR = b;
    cR = c;
    dR = d;
}

Vec2I rectangle::getA(){
    return aR;
}

Vec2I rectangle::getB(){
    return bR;
}

Vec2I rectangle::getC(){
    return cR;
}

Vec2I rectangle::getD(){
    return dR;
}

void rectangle::move(int x){
    aR.add(x);
    bR.add(x);
    cR.add(x);
    dR.add(x);
}

void rectangle::move(int x, int y){
    aR.add(x, y);
    bR.add(x, y);
    cR.add(x, y);
    dR.add(x, y);
}