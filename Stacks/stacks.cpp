//
// Created by Mohamed El Zein on 5/30/21.
//
#include <iostream>
#include "StackArr.h"
using namespace std;

int main(){
    cout << "Hello from stacks" << endl;
    StackArr stack;
    stack.push(1);
    cout << stack.top() << endl;
    cout << stack.empty() << endl;
    stack.pop();
    cout << stack.empty() << endl;
    int ctr = 0;
    while (ctr < 10) stack.push(ctr++);
    while (!stack.empty()) {
        cout << stack.top() << endl;
        stack.pop();
    }
}