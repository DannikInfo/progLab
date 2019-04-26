//
// Created by Данил Козловский on 2019-04-24.
//
#include <iostream>
#include <fstream>
#include <string>
#include <list>
#include <iomanip>
#include "busContainer.h"

using namespace std;

bool strToBool(string st){
    if(st == "0" || st == "false"){
        return false;
    }
    else if(st == "1" || st == "true")
        return true;
    return false;
}

void busContainer::getData(){
    ifstream is("/Users/danilkozlovskij/CLionProjects/OOP_lab/6/bus.data"); //Полный путь к файлу
    list<string> ls;
    string line;
    while(getline(is, line)){
        ls.push_back(line);
    }
    list<string>::iterator i = ls.begin();
    int d = 0;
    park.clear();
    for(; i != ls.end(); i++){
        string bs[4];
        string get = *i;
        size_t pos;
        int a = 0;
        string delimiter = ":";
        while ((pos = get.find(":")) != std::string::npos) {
            bs[a] = get.substr(0, pos);
            get.erase(0, pos + delimiter.length());
            a++;
        }
        bus b(stoi(bs[0]), stoi(bs[1]), bs[2], strToBool(bs[3]));
        park[d++] = b;
    }
}

void busContainer::printData(bool status) {
    cout << "№ Автобуса " << " № Маршрута " << " Водитель " << " Состояние " << endl;
    sort();
    for (int i = 0; i < park.size(); i++) {
        bus bs = this->park.at(i);
        if(bs.getStatus() == status){
            string st = "";
            if(bs.getStatus())
                st = "В парке";
            else
                st = "На маршруте";
            cout << bs.getNumber() << " " << bs.getNumRoute() << " " << bs.getDriver() << " " << st << endl;
        }
    }
}

void busContainer::setData(int num, bool status) {
    ofstream out("/Users/danilkozlovskij/CLionProjects/OOP_lab/6/bus.data");
    for (int i = 0; i < park.size(); i++) {
        bus bs = this->park.at(i);
        if (bs.getNumber() == num) {
            bs.setStatus(status);
        }
        this->park[i] = bs;
        out << bs.getNumber() << ":" << bs.getNumRoute() << ":" << bs.getDriver() << ":" << bs.getStatus() << ":end"
            << endl;
    }
}

void busContainer::sort(){
    for (int startIndex = 0; startIndex < 8 - 1; ++startIndex){
        int smallestIndex = startIndex;
        for (int currentIndex = startIndex + 1; currentIndex < this->park.size(); ++currentIndex){
            if (this->park[currentIndex].getNumber() < this->park[smallestIndex].getNumber())
                smallestIndex = currentIndex;
        }
        swap(this->park[startIndex], this->park[smallestIndex]);
    }
}
