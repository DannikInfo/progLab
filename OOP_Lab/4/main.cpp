#include <iostream>
#include "noteContainer.h"


int main() {
    int k = 10;
    noteContainer cont;
    string name, lastName;
    int number, day, month, year, i;
    while (k != 0){
        cout << "Меню: \n" <<
                "0.Закрыть программу\n" <<
                "1.Заполнить\n" <<
                "2.Вывести запись" << endl;
        cin >> k;
        switch (k) {
            case 1:
                while(i < 8) {
                    cout << "Введите имя фамилию номер день месяц год рождения" << endl;
                    cin >> name >> lastName >> number >> day >> month >> year;
                    cont.book[i] = note(name, lastName, number, day, month, year);
                    i++;
                }
                cont.sort();
                break;
            case 2:
                cout << "Введите фамилию" << endl;
                cin >> lastName;
                note n = cont.select(lastName);
                if(n.getName() != ""){
                    cout << "Имя: " << n.getName() << endl <<
                    "Фамилия: " << n.getLastName() << endl <<
                    "Номер: " << n.getNumber() << endl <<
                    "Дата рождения: " << n.getBDay()[0] << "." << n.getBDay()[1] << "." << n.getBDay()[2] << endl;
                }else
                    cout << "Такой записи не существует!" << endl;
                break;
        }
    }
    return 0;
}