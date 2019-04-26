#include <iostream>
#include "busContainer.h"

int main() {
    busContainer cont;
    int k = 10;
    int num;
    cout << "Меню:" << endl <<
         "0. Закрыть программу." << endl <<
         "1. Показать автобусы в парке." << endl <<
         "2. Показать автобусы на маршруте." << endl <<
         "3. Отметить выезд автобуса." << endl <<
         "4. Отметить въезд автобуса." << endl;
    while(k != 0){
        cin >> k;
        switch(k){
            case 1:
                cont.getData();
                cont.printData(true);
                break;
            case 2:
                cont.getData();
                cont.printData(false);
                break;
            case 3:
                cout << "Введите номер автобуса:" << endl;
                cin >> num;
                cont.setData(num, false);
                break;
            case 4:
                cout << "Введите номер автобуса:" << endl;
                cin >> num;
                cont.setData(num, true);
                break;
        }
    }
    return 0;
}