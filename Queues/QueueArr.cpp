//
// Created by Mohamed El Zein on 5/30/21.
//

#include "QueueArr.h"
#include <iostream>
#include <assert.h>

using namespace std;

template <class T>
QueueArr<T>::QueueArr() {
    count = 0;
    size = 5;
    arr = new T[size];
    front = -1;
    back = -1;
}
template <class T>
int QueueArr<T>::length() {
    return count;
}
template <class T>
T QueueArr<T>::Front() {
    assert(!empty());
    return arr[front];
}
template <class T>
QueueArr<T>::~QueueArr() {
    cout << "About to delete the queue" << endl;
    delete [] arr;
}
template<class T>
bool QueueArr<T>::empty() {
    return count == 0;
}

template<class T>
bool QueueArr<T>::full() {
    return count == size;
}

template<class T>
void QueueArr<T>::enqueue(T value) {
    assert(!full());
    back = (back + 1) % size;
    arr[back] = value;
    if (front == -1)
        front = 0;
    count++;
}
//      front  2 3  back
template<class T>
void QueueArr<T>::dequeue() {
    assert(!empty());
    front = (front + 1) % size;
    count--;
    if (count == 0)
        front = -1, back = -1;

}
