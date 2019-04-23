//
// Created by Данил Козловский on 2019-04-23.
//

#ifndef INC_4_NOTE_H
#define INC_4_NOTE_H

#include <string>

using namespace std;


class note {
private:
    string name;
    string lastName;
    int number;
    int bDay[3];
public:
    string getName();
    string getLastName();
    int getNumber();
    int* getBDay();

    void setName(string gName);
    void setLastName(string gLastName);
    void setNumber(int gNumber);
    void setBDay(int day, int month, int year);
    void setBDay(int* gBDay);

    note(string gName, string gLastName, int gNumber, int day, int month, int year);
    note(string gName, string gLastName, int gNumber, int* gBDay);
    note();
};


#endif //INC_4_NOTE_H
