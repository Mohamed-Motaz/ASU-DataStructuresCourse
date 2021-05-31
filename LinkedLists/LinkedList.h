//
// Created by Mohamed El Zein on 5/31/21.
//

#ifndef DATASTRUCTURES_LINKEDLIST_H
#define DATASTRUCTURES_LINKEDLIST_H


template <class T>
class Node{
public:
    T value;
    Node<T> *next;

    Node();
    Node(T val);
};


template <class T>
class LinkedList {
private:
    int count;
    Node<T>* head;
    Node<T>* tail;

public:
    LinkedList();
    int length();
    T at(int);
    void insertAt(int, T);
    void deleteAt(int);
    void append(T);
    void display();
    ~LinkedList();
};


#endif //DATASTRUCTURES_LINKEDLIST_H
