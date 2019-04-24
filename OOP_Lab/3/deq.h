#ifndef DEQUE_H
#define DEQUE_H

#include <list>

template<class T>class deq : private std::list<T>{
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
