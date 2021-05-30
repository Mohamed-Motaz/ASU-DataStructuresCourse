//
// Created by Mohamed El Zein on 5/30/21.
//

#ifndef DATASTRUCTURES_STACKARR_H
#define DATASTRUCTURES_STACKARR_H

template <class T>
class StackArr {
private:
    T *arr;
    int elements;
    int capacity;
public:
    StackArr();
    int length();
    void pop();
    T top();
    void push(T);
    bool empty();
    void expand();
    ~StackArr();
};


#endif //DATASTRUCTURES_STACKARR_H
