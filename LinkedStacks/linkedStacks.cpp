//
// Created by Mohamed El Zein on 6/1/21.
//

#include "LinkedStack.cpp"
#include <iostream>

using namespace std;

int main(){
    cout << "Hello from linkedStack" << endl;
    LinkedStack<int> stack;
    stack.push(5);
    stack.push(8);
    stack.pop();
    stack.push(10);
    cout << stack.pop() << endl;
    cout << stack.pop() << endl;
    if (stack.isEmpty()){
        cout << "The linkedStack is now empty" << endl;
    }
}