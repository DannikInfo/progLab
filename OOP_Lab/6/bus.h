//
// Created by Данил Козловский on 2019-04-24.
//

#ifndef INC_6_BUS_H
#define INC_6_BUS_H

#include <string>

using namespace std;

class bus {
private:
    bool status;
    int number, numRoute;
    string driver;
public:
    void setStatus(bool st);
    void setNumber(int num);
    void setNumRoute(int num);
    void setDriver(string dr);

    bool getStatus();
    int getNumber();
    int getNumRoute();
    string getDriver();

    bus(int number, int numRoute, string driver, bool status);
    bus();
};


#endif //INC_6_BUS_H
