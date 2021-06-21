//
// Created by Mohamed El Zein on 5/31/21.
//

#include <iostream>
#include "BSTree.cpp"

using namespace std;

int main(){
    cout << "Hello from binarySearchTrees" << endl;
    BSTree<int> bst;

    bst.insert(100);
    bst.insert(200);
    bst.insert(90);
    bst.insert(150);
    bst.insert(125);
    bst.insert(88);
    bst.insert(99);
    bst.insert(210);
//    bst.insert(63);
//    bst.insert(41);
//    bst.insert(16);
//    bst.insert(25);
//    bst.insert(53);
//    bst.insert(46);
//    bst.insert(55);
//    bst.insert(74);
//    bst.insert(65);
//    bst.insert(64);
//    bst.insert(70);

    cout << bst.getLevel(100) << endl;
    cout << bst.getLevel(200) << endl;
    cout << bst.getLevel(150) << endl;


    bst.remove(100);


    bst.traverse(2);
    cout << endl;
    cout << bst.findParent(6666)->value << endl;

    if (bst.contains(90))
        cout << "Found" << endl;
    else
        cout << "Not Found" << endl;
}