//
// Created by Mohamed El Zein on 5/30/21.
//

#ifndef DATASTRUCTURES_QUEUEARR_H
#define DATASTRUCTURES_QUEUEARR_H

template <class T>
class QueueArr {
private:
    T *arr;
    int size, count;
    int front, back; //circular queue so need to keep track of indices
public:
    QueueArr();
    ~QueueArr();
    int length();
    bool empty();
    bool full();
    void enqueue(T);
    void dequeue();
    T Front();

};


#endif //DATASTRUCTURES_QUEUEARR_H
