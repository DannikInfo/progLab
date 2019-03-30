//
// Created by Данил Козловский on 2019-03-27.
//
// Ported from JAVA
//
#include "math.h"
#include "Vec2I.h"

    int x, y;

    Vec2I::Vec2I() {
        setTo(0, 0);
    }

    Vec2I::Vec2I(int x, int y) {
        setTo(x, y);
    }

    int Vec2I::getX() {
        return x;
    }

    int Vec2I::getY() {
        return y;
    }

    void Vec2I::setX(int xG) {
        x = xG;
    }

    void Vec2I::setY(int yG) {
        y = yG;
    }

    void Vec2I::setTo(Vec2I vec) {
        Vec2I::setTo(vec.getX(), vec.getY());
    }

    void Vec2I::setTo(int xG, int yG) {
        x = xG;
        y = yG;
    }

    void Vec2I::add(Vec2I vec) {
        Vec2I::add(vec.getX(), vec.getY());
    }

    void Vec2I::add(int n) {
        add(n, n);
    }

    void Vec2I::add(int xG, int yG) {
        x += xG;
        y += yG;
    }

    void Vec2I::offset(Vec2I vec) {
        copy()->add(vec);
    }

    void Vec2I::offset(int n) {
        copy()->add(n);
    }

    void Vec2I::offset(int x, int y) {
        copy()->add(x, y);
    }

    void Vec2I::sub(Vec2I vec) {
        sub(vec.getX(), vec.getY());
    }

    void Vec2I::sub(int n) {
        sub(n, n);
    }

    void Vec2I::sub(int xG, int yG) {
        x -= xG;
        y -= yG;
    }

    void Vec2I::mul(Vec2I vec) {
        mul(vec.getX(), vec.getY());
    }

    void Vec2I::mul(int n) {
        mul(n, n);
    }

    void Vec2I::mul(int xG, int yG) {
        x *= xG;
        y *= yG;
    }

    void Vec2I::div(Vec2I vec) {
        div(vec.getX(), vec.getY());
    }

    void Vec2I::div(int n) {
        div(n, n);
    }

    void Vec2I::div(int xG, int yG) {
        x /= xG;
        y /= yG;
    }

    Vec2I* Vec2I::copy() {
        return new Vec2I(this->x, this->y);
    }
