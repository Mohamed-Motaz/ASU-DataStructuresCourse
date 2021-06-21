//
// Created by Mohamed El Zein on 5/30/21.
//

#include "ArrList.h"
#include <iostream>
using namespace std;
template<class T>
ArrList<T>::ArrList() {
    size = 5;
    arr = new int[size];
    count = 0;
}

template<class T>
int ArrList<T>::length() {
    return count;
}

template<class T>
void ArrList<T>::append(T val) {
    if (count == size)
        expand();
    arr[count++] = val;
}

template<class T>
void ArrList<T>::expand() {
    size *= 2;
    T* tmp = new T[size];
    for (int i = 0; i < count; i++){
        tmp[i] = arr[i];
    }
    delete[] arr;
    arr = tmp;
}

template<class T>
void ArrList<T>::display() {
    for (int i = 0 ;i < count; i++)
        cout << arr[i] << " ";
    cout << endl;
}

template<class T>
T ArrList<T>::at(int idx) {
    assert(idx > -1 && idx < count);
    return arr[idx];
}

template<class T>
void ArrList<T>::insertAt(int idx, T val) {
    assert(idx > -1 && idx < count);
    if (count == size)
        expand();
    for (int i = count; i > idx; i--)
        arr[i] = arr[i - 1];

    arr[idx] = val;
    count++;

}

template<class T>
void ArrList<T>::deleteAt(int idx) {
    assert(idx > -1 && idx < count);
    for (int i = idx; i < count - 1; i++)
        arr[i] = arr[i + 1];

    count--;
}

template<class T>
ArrList<T>::~ArrList() {
    delete [] arr;
}
template <class T>
void ArrList<T>::RemoveDuplicates()
{
    T prev=arr[0];
    for(int i=1; i<count; i++)
    {
        if(arr[i]==prev)
        {
            deleteAt(i);
            i--;
        }
        else prev=arr[i];
    }
}
