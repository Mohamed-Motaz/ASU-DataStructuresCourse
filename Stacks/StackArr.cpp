//
// Created by Mohamed El Zein on 5/30/21.
//

#include "StackArr.h"
#include <assert.h>
#include <iostream>

using namespace std;

StackArr::StackArr() {
    elements = 0;
    capacity = 2;
    arr = new int[capacity];
}
void StackArr::push(int value) {
    if (elements == capacity)
        expand();

    arr[elements] = value;
    elements++;
}
void StackArr::expand() {
    capacity *= 2;
    int *tmp = new int[capacity];
    for (int i = 0; i < elements; i++){
        tmp[i] = arr[i];
    }
    delete[] arr;
    arr = tmp;
}
void StackArr::pop() {
    assert(elements != 0);
    elements--;
}
int StackArr::top() {
    assert(elements != 0);
    return arr[elements - 1];
}
bool StackArr::empty() {
    return elements == 0;
}

int StackArr::length() {
    return elements;
}

StackArr::~StackArr() {
    cout << "Stack about to be deleted" << endl;
    delete[] arr;
}
