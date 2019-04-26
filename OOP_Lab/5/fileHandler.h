//
// Created by Данил Козловский on 2019-04-26.
//

#ifndef INC_5_1_FILEHANDLER_H
#define INC_5_1_FILEHANDLER_H


#include <string>
#include <list>

using namespace std;

class fileHandler {
public:
    void readFile(string file);
    string handleString(string str);
    void printFile(list<string> lsOut);

};


#endif //INC_5_1_FILEHANDLER_H
