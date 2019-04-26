//
// Created by Данил Козловский on 2019-04-24.
//

#ifndef INC_6_BUSCONTAINER_H
#define INC_6_BUSCONTAINER_H

#include <map>
#include "bus.h"

class busContainer {
public:
    map<int, bus> park;

    void printData(bool status);

    void getData();

    void setData(int num, bool status);

    void sort();
};


#endif //INC_6_BUSCONTAINER_H
