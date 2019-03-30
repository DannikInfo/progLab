//
// Created by Данил Козловский on 2019-03-28.
//

#include <iostream>
#include "Factory.h"

using namespace std;

triangle* Factory::addObjectTr() {
    Vec2I a, b, c;
    triangle *tr;
    int x, y;
    cout << "Введите попарно координаты точек:" << endl;
    cout << "A:";
    cin >> x >> y;
    a.setTo(x, y);
    cout << "B:";
    cin >> x >> y;
    b.setTo(x, y);
    cout << "C:";
    cin >> x >> y;
    c.setTo(x, y);
    tr = new triangle(a, b, c);
    return tr;
}
rectangle* Factory::addObjectRe() {
    Vec2I aR, bR, cR, dR;
    rectangle *re;
    int x, y;
    cout << "Введите попарно координаты точек:" << endl;
    cout << "A:";
    cin >> x >> y;
    aR.setTo(x, y);
    cout << "B:";
    cin >> x >> y;
    bR.setTo(x, y);
    cout << "C:";
    cin >> x >> y;
    cR.setTo(x, y);
    cout << "D:";
    cin >> x >> y;
    dR.setTo(x, y);
    re = new rectangle(aR, bR, cR, dR);
    return re;
}

void Factory::deleteObjects(rectangle *re, triangle *tr) {
    delete re;
    delete tr;
}