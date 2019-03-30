//
// Created by Данил Козловский on 2019-03-27.
//

#include <algorithm>
#include "handler.h"

using namespace std;

bool handler::intersect(triangle *tr, rectangle *re){
    if(intersect(tr->getA(), tr->getB(), re->getA(), re->getB())
    || intersect(tr->getA(), tr->getB(), re->getB(), re->getC())
    || intersect(tr->getA(), tr->getB(), re->getC(), re->getD())
    || intersect(tr->getA(), tr->getB(), re->getA(), re->getD())
    || intersect(tr->getA(), tr->getC(), re->getA(), re->getB())
    || intersect(tr->getA(), tr->getC(), re->getB(), re->getC())
    || intersect(tr->getA(), tr->getC(), re->getC(), re->getD())
    || intersect(tr->getA(), tr->getC(), re->getA(), re->getD())
    || intersect(tr->getB(), tr->getC(), re->getA(), re->getB())
    || intersect(tr->getB(), tr->getC(), re->getC(), re->getB())
    || intersect(tr->getB(), tr->getC(), re->getC(), re->getD())
    || intersect(tr->getB(), tr->getC(), re->getA(), re->getD())
    )
        return true;
    else
        return false;
}

inline int area (Vec2I a, Vec2I b, Vec2I c) {
    return (b.x - a.x) * (c.y - a.y) - (b.y - a.y) * (c.x - a.x);
}

int max(int a, int b){
    if(a > b)
        return a;
    else
        return b;
}
int min(int a, int b){
    if(a < b)
        return a;
    else
        return b;
}

inline bool intersect_1 (int a, int b, int c, int d) {
    if (a > b)  swap (a, b);
    if (c > d)  swap (c, d);
    return max(a,c) <= min(b,d);
}

bool handler::intersect (Vec2I a, Vec2I b, Vec2I c, Vec2I d) {
    return intersect_1 (a.x, b.x, c.x, d.x)
           && intersect_1 (a.y, b.y, c.y, d.y)
           && area(a,b,c) * area(a,b,d) <= 0
           && area(c,d,a) * area(c,d,b) <= 0;
}
