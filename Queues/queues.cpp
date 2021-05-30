//
// Created by Mohamed El Zein on 5/30/21.
//
#include <iostream>
#include "QueueArr.cpp"
using namespace std;

int main(){
    cout << "Hello from queues" << endl;
    QueueArr<int> q;
    q.enqueue(5);
    cout << q.Front() << endl;
    q.enqueue(10);
    cout << q.Front() << endl;
    q.dequeue();
    cout << q.Front() << endl;
    q.dequeue();

    q.enqueue(5);
    q.enqueue(6);
    q.enqueue(7);


    while (!q.empty()){
        cout << q.Front() << endl;
        q.dequeue();
    }
}