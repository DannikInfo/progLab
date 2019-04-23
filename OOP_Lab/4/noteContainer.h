//
// Created by Данил Козловский on 2019-04-23.
//

#ifndef INC_4_NOTECONTAINER_H
#define INC_4_NOTECONTAINER_H

#include "note.h"

class noteContainer {
public:
    note book[8];

    note select(string name, string lastName);
    note select(string lastName);
    note select(int number);
    note select(int* bDay);

    void insert(string name, string lastName, note n);
    void insert(int number, note n);
    void insert(int* bDay, note n);

    void sort();
};


#endif //INC_4_NOTECONTAINER_H
