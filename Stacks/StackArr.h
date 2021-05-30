//
// Created by Mohamed El Zein on 5/30/21.
//

#ifndef DATASTRUCTURES_STACKARR_H
#define DATASTRUCTURES_STACKARR_H


class StackArr {
private:
    int *arr;
    int elements;
    int capacity;
public:
    StackArr();
    int length();
    void pop();
    int top();
    void push(int);
    bool empty();
    void expand();
    ~StackArr();
};


#endif //DATASTRUCTURES_STACKARR_H
