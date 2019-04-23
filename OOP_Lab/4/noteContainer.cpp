//
// Created by Данил Козловский on 2019-04-23.
//

#include "noteContainer.h"
#include <iostream>
using namespace std;

note noteContainer::select(string name, string lastName){
    for(int i = 0; i < 8; i++){
        if(book[i].getName() == name && book[i].getLastName() == lastName)
            return book[i];
        else
            cout<<"Записи с таким именем и фамилией не существует!"<<endl;
    }
}
note noteContainer::select(string lastName){
    for(int i = 0; i < 8; i++){
        if(book[i].getLastName() == lastName)
            return book[i];
        else
            cout<<"Записи с такой фамилией не существует!"<<endl;
    }
}
note noteContainer::select(int number){
    for(int i = 0; i < 8; i++){
        if(book[i].getNumber() == number)
            return book[i];
        else
            cout<<"Записи с таким номером не существует!"<<endl;
    }
}
note noteContainer::select(int* bDay){
    for(int i = 0; i < 8; i++){
        if(book[i].getBDay() == bDay)
            return book[i];
        else
            cout<<"Записи с таким днем рождения не существует!"<<endl;
    }
}

void noteContainer::insert(string name, string lastName, note n){
    n.setName(name);
    n.setLastName(lastName);
    sort();
}
void noteContainer::insert(int number, note n){
    n.setNumber(number);
    sort();
}
void noteContainer::insert(int* bDay, note n){
    n.setBDay(bDay);
    sort();
}

void noteContainer::sort(){
    for (int startIndex = 0; startIndex < 8 - 1; ++startIndex){
        int smallestIndex = startIndex;
        for (int currentIndex = startIndex + 1; currentIndex < 8; ++currentIndex){
            if (book[currentIndex].getNumber() < book[smallestIndex].getNumber())
                smallestIndex = currentIndex;
        }
        swap(book[startIndex], book[smallestIndex]);
    }
}