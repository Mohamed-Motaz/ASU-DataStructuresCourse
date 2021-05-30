//
// Created by Mohamed El Zein on 5/30/21.
//

#include "StackArr.h"
#include <assert.h>
#include <iostream>

using namespace std;
template <class T>
StackArr<T>::StackArr() {
    elements = 0;
    capacity = 2;
    arr = new T[capacity];
}
template <class T>
void StackArr<T>::push(T value) {
    if (elements == capacity)
        expand();

    arr[elements] = value;
    elements++;
}
template <class T>
void StackArr<T>::expand() {
    capacity *= 2;
    T *tmp = new T[capacity];
    for (int i = 0; i < elements; i++){
        tmp[i] = arr[i];
    }
    delete[] arr;
    arr = tmp;
}
template <class T>
void StackArr<T>::pop() {
    assert(elements != 0);
    elements--;
}
template <class T>
T StackArr<T>::top() {
    assert(elements != 0);
    return arr[elements - 1];
}
template <class T>
bool StackArr<T>::empty() {
    return elements == 0;
}
template <class T>
int StackArr<T>::length() {
    return elements;
}
template <class T>
StackArr<T>::~StackArr() {
    cout << "Stack about to be deleted" << endl;
    delete[] arr;
}
