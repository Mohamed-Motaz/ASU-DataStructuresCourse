//
// Created by Mohamed El Zein on 5/30/21.
//
#include <iostream>
#include "StackArr.cpp"
using namespace std;

int main(){
    cout << "Hello from stacks" << endl;
    StackArr<char> stack;
    stack.push('a');
    cout << stack.top() << endl;
    cout << stack.empty() << endl;
    stack.pop();
    cout << stack.empty() << endl;
    int ctr = 0;
    char tmp = 'a';
    while (ctr < 10) stack.push(tmp++), ctr++;
    while (!stack.empty()) {
        cout << stack.top() << endl;
        stack.pop();
    }
}