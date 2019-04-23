//
// Created by Данил Козловский on 2019-04-23.
//

#include "note.h"

string note::getName(){
    return name;
}
string note::getLastName(){
    return lastName;
}
int note::getNumber(){
    return number;
}
int* note::getBDay(){
    return bDay;
}

void note::setName(string gName){
    name = gName;
}
void note::setLastName(string gLastName){
    lastName = gLastName;
}
void note::setNumber(int gNumber){
    number = gNumber;
}
void note::setBDay(int* gBDay){
    bDay[0] = gBDay[0];
    bDay[1] = gBDay[1];
    bDay[2] = gBDay[2];
}
void note::setBDay(int day, int month, int year){
    bDay[0] = day;
    bDay[1] = month;
    bDay[2] = year;
}

note::note(string gName, string gLastName, int gNumber, int day, int month, int year){
    setName(gName);
    setLastName(gLastName);
    setNumber(gNumber);
    setBDay(day, month, year);
}

note::note(){}

note::note(string gName, string gLastName, int gNumber, int* gBDay){
    setName(gName);
    setLastName(gLastName);
    setNumber(gNumber);
    setBDay(gBDay);
}
