//
// Created by Mohamed El Zein on 6/1/21.
//

#ifndef DATASTRUCTURES_LINKEDSTACK_H
#define DATASTRUCTURES_LINKEDSTACK_H

template <class T>
class StackNode{
public:
    T value;
    StackNode<T>* next;
    StackNode();
    StackNode(T);

};


template <class T>
class LinkedStack {
    int count;
    StackNode<T> * head;
public:
    LinkedStack();
    bool isEmpty();
    void push(T);
    T pop();
    int length();
    void clear();
    ~LinkedStack();

};



#endif //DATASTRUCTURES_LINKEDSTACK_H
