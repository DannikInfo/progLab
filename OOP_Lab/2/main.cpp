#include <iostream>
#include "handler.h"
#include "Factory.h"

using namespace std;

int main() {
    Factory fa;
    rectangle *re;
    triangle *tr;
    int type;
    int offsetX, offsetY;
    int k = 10;
    cout<<  "\n  Меню:\n"
            "0. Закрыть программу\n"
            "1. Проверить на пересечение\n"
            "2. Переместить треугольник\n"
            "3. Переместить четырехугольник\n"
            "4. Показать точки фигур\n"
            "5. Создать объект\n"
            "6. Удалить объект\n";
    while(k != 0){
        cin >> k;
        switch(k){
            case 5:
                cout << "Выберите объект для создания: (0 - четырехугольник 1 - треугольник) ";
                cin >> type;
                if(type == 0)
                    re = fa.addObjectRe();
                else
                    tr = fa.addObjectTr();
                break;
            case 6:
                fa.deleteObjects(re, tr);
                cout << "Объекты успешно удалены!" << endl;
                break;
            case 4:
                cout << "Треугольник:"<< endl;
                cout << "A(" << tr->getA().x << ";" <<  tr->getA().y << ")" << endl;
                cout << "B(" << tr->getB().x << ";" <<  tr->getB().y << ")" << endl;
                cout << "C(" << tr->getC().x << ";" <<  tr->getC().y << ")" << endl;
                cout << "Четырехугольник:" << endl;
                cout << "A(" << re->getA().x << ";" <<  re->getA().y << ")" << endl;
                cout << "B(" << re->getB().x << ";" <<  re->getB().y << ")" << endl;
                cout << "C(" << re->getC().x << ";" <<  re->getC().y << ")" << endl;
                cout << "D(" << re->getD().x << ";" <<  re->getD().y << ")" << endl;
                break;
            case 3:
                cout << "Введите числа на которые хотите сместить четырехугольник:";
                cin >> offsetX >> offsetY;
                re->move(offsetX, offsetY);
                break;
            case 2:
                cout << "Введите числа на которые хотите сместить треугольник:";
                cin >> offsetX >> offsetY;
                tr->move(offsetX, offsetY);
                break;
            case 1:
                handler h;
                if(h.intersect(tr, re))
                    cout << "Пересекаются" << endl;
                else
                    cout<< "Не пересекаются" << endl;
                break;
        }
    }
}