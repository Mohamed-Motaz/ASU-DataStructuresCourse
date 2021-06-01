//
// Created by Mohamed El Zein on 5/31/21.
//

#include <assert.h>
#include <iostream>
#include "LinkedList.h"

using namespace std;

template <class T>
Node<T>::Node() {
    value = 0;
    next = 0;
}

template <class T>
Node<T>::Node(T val) {
    value = val;
    next = 0;
}

template<class T>
LinkedList<T>::LinkedList() {
    count = 0;
    head = 0;
    tail = 0;
}

template<class T>
int LinkedList<T>::length() {
    return count;
}

template<class T>
T LinkedList<T>::at(int idx) {
    assert(idx >= 0 && idx < count);
    Node<T>* tmp = head;
    for (int i = 0; i < idx; i++)
        tmp = tmp->next;
    return tmp->value;
}

template<class T>
void LinkedList<T>::insertAt(int idx, T value) {
    assert(idx >= 0 && idx < count);
    Node<T>* newNode = new Node(value);
    Node<T>* tmp = head;
    if (idx == 0){
        newNode->next = head;
        head = newNode;
    }else{
        for (int i = 0; i < idx - 1; i++){
            tmp = tmp->next;
        }
        newNode->next = tmp->next;
        tmp->next = newNode;
    }
    count++;
}

template<class T>
void LinkedList<T>::deleteAt(int idx) {
    assert(idx >= 0 && idx < count);
    Node<T> *tmp = head;
    if (idx == 0){
        head = tmp->next;
        delete tmp;
    }else{
        for (int i = 0; i < idx - 1; i++)
            tmp = tmp->next;
        Node<T> *current = tmp->next;
        tmp->next = current->next;
        delete current;
        if (idx == count - 1)
            tail = tmp;
    }
    count--;

}
template<class T>
void LinkedList<T>::display(){
    Node<T> *tmp = head;
    while (tmp != 0){
        cout << tmp->value << " ";
        tmp = tmp->next;
    }
    cout << endl;
}
template<class T>
void LinkedList<T>::moveNode(T val, int idx) {
    Node<T> * tmp = head;
    int curIdx = 0;
    while (tmp != 0 && tmp->value != val){
        curIdx++;
        tmp = tmp->next;
    }
    deleteAt(curIdx);
    insertAt(idx, val);
}

template<class T>
void LinkedList<T>::append(T value) {
    Node<T> *newNode = new Node(value);
    if (head == 0){
        head = tail = newNode;
    }else{
        tail->next = newNode;
        tail = newNode;
    }
    count++;
}

template<class T>
LinkedList<T>::~LinkedList() {
}

