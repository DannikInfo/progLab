#include <iostream>
#include "deque.h"

using namespace std;

int main() {
    int k = 100;
    int size = 0;
    int i;
    double d;
    string s;
    deq dI;
    //deque2<double> dD;
    //deque2<string> dS;
    while(k != 0){
        cout << "Меню:";
        cin >> k;
        switch(k){
            case 1:
                cout << "Введите размер очереди: ";
                cin >> size;
                dI.sSize(size);
                //dD.setSize(size);
                //dS.setSize(size);
                break;
                //очистка дека
           /* case 13:
                dS.clear();
                break;
            case 12:
                dD.clear();
                break;
            case 11:
                dI.clear();
                break;
                //вывод сзади
            case 10:
                cout << "конец:" << dS.getBack() << endl;
                break;
            case 9:
                cout << "конец:" << dD.getBack() << endl;
                break;
            case 8:
                cout << "конец:" << dI.getBack() << endl;
                break;
                //вывод спереди
            case 7:
                cout << "начало:" << dS.getFront() << endl;
                break;
            case 6:
                cout << "начало:" << dD.getFront() << endl;
                break;
            case 5:
                cout << "начало:" << dI.getFront() << endl;
                break;
                //заполнение дека c конца
            case 16:
                cout << "Введите число c плавающей точкой:";
                cin >> d;
                dD.addBack(d);
                break;
            case 15:
                cout << "Введите число:";
                cin >> i;
                dI.addBack(i);
                break;
            case 14:
                cout << "Введите строку:";
                cin >> s;
                dS.addBack(s);
                break;
                //заполнение дека c начала
            case 4:
                cout << "Введите число c плавающей точкой:";
                cin >> d;
                dD.addFront(d);
                break;
            case 3:
                cout << "Введите число:";
                cin >> i;
                dI.addFront(i);
                break;
            case 2:
                cout << "Введите строку:";
                cin >> s;
                dS.addFront(s);
                break;*/
        }
    }
    return 0;
}