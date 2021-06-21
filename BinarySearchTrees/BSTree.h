//
// Created by Mohamed El Zein on 5/31/21.
//

#ifndef DATASTRUCTURES_BSTREE_H
#define DATASTRUCTURES_BSTREE_H

template <class T>
class Node{
public:
    T value;
    Node<T> *right, *left;
    Node();
    Node(T);
};


template <class T>
class BSTree {
    Node<T> * root;
public:
    BSTree();
    void traverse(int order);
    void insert(T);
    void remove(T);
    bool contains(T);
    void inOrder(Node<T>* start);
    void preOrder(Node<T>* start);
    void postOrder(Node<T>* start);
    int getLevel(T);
    Node<T>* findParent(T);
    Node<T>* findMin(Node<T>*);
    Node<T>* findNode(T);

    ~BSTree();
};



#endif //DATASTRUCTURES_BSTREE_H
