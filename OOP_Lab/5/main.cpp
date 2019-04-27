#include <iostream>
#include "fileHandler.h"

int main() {
    fileHandler f;
    int k = 10;
    while(k != 0){
        cout << "меню:" << endl <<
                "0. Закрыть программу." << endl <<
                "1. Вывести отформатированный текст на экран." << endl;
        cin >> k;
        switch(k){
            case 1:
                f.readFile("/Users/danilkozlovskij/ClionProjects/OOP_lab/5/input.txt"); //Полный путь к файлу!
                break;
        }
    }
    return 0;
}