//
// Created by Mohamed El Zein on 6/1/21.
//

#include "LinkedStack.h"
#include <assert.h>

template<class T>
StackNode<T>::StackNode() {
    value = 0;
    next = 0;
}

template<class T>
StackNode<T>::StackNode(T val) {
    value = val;
    next = 0;
}

template<class T>
LinkedStack<T>::LinkedStack() {
    head = 0;
    count = 0;
}

template<class T>
void LinkedStack<T>::push(T val) {
    StackNode<T> * newNode = new StackNode<T>(val);
    newNode->next = head;
    head = newNode;
    count++;
}

template<class T>
bool LinkedStack<T>::isEmpty() {
    return count == 0;
}

template<class T>
T LinkedStack<T>::pop() {
    assert(!isEmpty());
    StackNode<T> * tmp = head;
    head = head->next;
    T toReturn = tmp->value;
    delete tmp;
    count--;
    return toReturn;
}

template<class T>
int LinkedStack<T>::length() {
    return count;
}

template<class T>
void LinkedStack<T>::clear() {
    while (head != 0){
        StackNode<T> * tmp = head;
        head = head->next;
        delete tmp;
    }
    count = 0;
}

template<class T>
LinkedStack<T>::~LinkedStack() {
    clear();
}
