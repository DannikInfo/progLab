//
// Created by Данил Козловский on 2019-04-24.
//

#include "bus.h"

void bus::setStatus(bool st){
    status = st;
}
void bus::setNumber(int num){
    number = num;
}
void bus::setNumRoute(int num){
    numRoute = num;
}
void bus::setDriver(string dr){
    driver = dr;
}

bool bus::getStatus(){
    return status;
}
int bus::getNumber(){
    return number;
}
int bus::getNumRoute(){
    return numRoute;
}
string bus::getDriver(){
    return driver;
}

bus::bus(int num, int route, string dr, bool st){
    setNumber(num);
    setNumRoute(route);
    setDriver(dr);
    setStatus(st);
}
bus::bus(){}