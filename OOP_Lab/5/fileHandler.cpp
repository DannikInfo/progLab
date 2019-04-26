//
// Created by Данил Козловский on 2019-04-26.
//

#include <iostream>
#include <fstream>
#include <string>
#include <list>
#include "fileHandler.h"

void fileHandler::readFile(string file){
    list<string> ls;
    string line;
        ifstream in(file);
    while(getline(in, line)){
        ls.push_back(line);
    }
    in.close();

    list<string>::iterator i = ls.begin();
    list<string> lsOut;
    for (; i != ls.end(); i++) {
        lsOut.push_back(handleString(*i));
    }
    printFile(lsOut);

}

bool replace(std::string& str, const std::string& from, const std::string& to) {
    size_t start_pos = str.find(from);
    if(start_pos == std::string::npos)
        return false;
    str.replace(start_pos, from.length(), to);
    return true;
}

string fileHandler::handleString(string str){
    string repl[10] = {" ноль "," один "," два "," три "," четыре "," пять "," шесть "," семь "," восемь "," девять "};
    replace(str, ".", ".\n");
    replace(str, "?", "?\n");
    replace(str, "!", "!\n");
    for(int i = 0; i < 10; i++)
        replace(str, to_string(i), repl[i]);
    return str;
}

void fileHandler::printFile(list<string> lsOut){
    list<string>::iterator i = lsOut.begin();
    for (; i != lsOut.end(); i++) {
        cout << *i;
    }
    cout << endl;
}
