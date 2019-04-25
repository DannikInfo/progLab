#ifndef DEQUE_H
#define DEQUE_H

#include <iostream>
#include <list>
#include <iterator>

using namespace std;

template<class T>class deq : private list<T>{
private:
    int sizeLimit;
public:
    void addBack(T data){
        if(this->size() == getSize())
            removeFront();
        this->push_back(data);
    }
    void addFront(T data){
        if(this->size() == getSize())
            removeBack();
        this->push_front(data);
    }

    void removeFront(){
        this->remove(this->front());
    }
    void removeBack(){
        this->remove(this->back());
    }

    T getBack(){
        T data = this->back();
        //removeBack();
        return data;
    }
    T getFront(){
        T data = this->front();
        //removeFront();
        return data;
    }

    void printDeq(){
        copy (this->begin(), this->end(), ostream_iterator<T>(cout," "));
        cout << endl;
    }

    int getSize(){
        return sizeLimit;
    }
    void sSize(int size){
        sizeLimit = size;
    }

    void clr(){
        this->clear();
    }

};

#endif //INC_DEQUE_H
