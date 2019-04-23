//
// Created by Данил Козловский on 2019-04-23.
//

#ifndef INC_4_NOTECONTAINER_H
#define INC_4_NOTECONTAINER_H

#include "note.h"

class noteContainer {
public:
    static note book[8];

    note static select(string name, string lastName);
    note static select(string lastName);
    note static select(int number);
    note static select(int* bDay);

    void static insert(string name, string lastName, note n);
    void static insert(int number, note n);
    void static insert(int* bDay, note n);

    void static sort();
};


#endif //INC_4_NOTECONTAINER_H
