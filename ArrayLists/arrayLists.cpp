//
// Created by Mohamed El Zein on 5/30/21.
//
#include <iostream>
#include "arrList.cpp"
using namespace std;

int main(){
    cout << "Hello from arrayLists" << endl;
    ArrList<int> lst;
    lst.append(1);
    lst.append(2);
    lst.append(3);
    lst.append(4);
    lst.display();
    lst.deleteAt(0);
    lst.display();
    lst.insertAt(2, 100);
    lst.display();
}