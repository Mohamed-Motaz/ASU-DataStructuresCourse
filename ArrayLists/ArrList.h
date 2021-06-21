//
// Created by Mohamed El Zein on 5/30/21.
//

#ifndef DATASTRUCTURES_ARRLIST_H
#define DATASTRUCTURES_ARRLIST_H

template <class T>
class ArrList {
private:
    T* arr;
    int size, count;

public:
    ArrList();
    int length();
    void append(T);
    void expand();
    void display();
    T at(int);
    void insertAt(int, T);
    void deleteAt(int);
    void RemoveDuplicates();
    ~ArrList();
};

#endif //DATASTRUCTURES_ARRLIST_H
