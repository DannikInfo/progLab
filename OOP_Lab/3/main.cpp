#include <iostream>
#include <string>
#include "deq.h"

using namespace std;

int main() {
    int k = 100;
    int size = 0;
    int i;
    double d;
    string s;
    deq<int> dI;
    deq<double> dD;
    deq<string> dS;
    cout << "Меню:" << endl <<
         "0. Закрыть программу" << endl <<
         "1. Создать очереди" << endl <<
         "2. Заполнение строковой очереди с начала" << endl <<
         "3. Числовой" << endl <<
         "4. С плавающей точкой" << endl <<
         "5. Вывод числовой очереди с начала" << endl <<
         "6. С плавающей точкой" << endl <<
         "7. Строковой" << endl <<
         "8. Вывод числовой очереди с конца" << endl <<
         "9. С плавающей точкой" << endl <<
         "10. Строковой" << endl <<
         "11. Очистка числовой очереди" << endl <<
         "12. С плавающей точкой" << endl <<
         "13. Строковой" << endl <<
         "14. Заполнение строковой очереди с конца" << endl <<
         "15. Числовой" << endl <<
         "16. С плавающей точкой" << endl <<
         "17. Вывод полной очереди" << endl;
    while(k != 0){
        cin >> k;
        switch(k){
            case 1:
                cout << "Введите размер очереди: ";
                cin >> size;
                dI.sSize(size);
                dD.sSize(size);
                dS.sSize(size);
                break;
                //очистка дека
            case 13:
                dS.clr();
                break;
            case 12:
                dD.clr();
                break;
            case 11:
                dI.clr();
                break;
                //вывод сзади
            case 10:
                cout << "конец: " << dS.getBack() << endl;
                break;
            case 9:
                cout << "конец: " << dD.getBack() << endl;
                break;
            case 8:
                cout << "конец: " << dI.getBack() << endl;
                break;
                //вывод спереди
            case 7:
                cout << "начало: " << dS.getFront() << endl;
                break;
            case 6:
                cout << "начало: " << dD.getFront() << endl;
                break;
            case 5:
                cout << "начало: " << dI.getFront() << endl;
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
                break;
            case 17:
                dI.printDeq();
                dD.printDeq();
                dS.printDeq();
                break;
        }
    }
    return 0;
}