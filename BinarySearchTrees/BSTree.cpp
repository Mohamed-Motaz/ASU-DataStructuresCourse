//
// Created by Mohamed El Zein on 5/31/21.
//

#include "BSTree.h"
#include <assert.h>
#include <iostream>

using namespace std;

template <class T>
Node<T>::Node(){
    right = left = 0;
}

template <class T>
Node<T>::Node(T val) {
    value = val;
    right = left = 0;
}


template<class T>
BSTree<T>::BSTree() {
    root = 0;
}

template<class T>
void BSTree<T>::traverse(int order) {
    if (order==1)
        inOrder(root);
    else if (order==2)
        preOrder(root);
    else
        postOrder(root);
}

template<class T>
void BSTree<T>::insert(T val) {
    assert(!contains(val));
    Node<T> *newNode = new Node<T>(val);
    if (root == 0){
        root = newNode;
    }else{
        Node<T> *tmp = root;
        while (true){
            if (val < tmp->value){
                if (tmp->left == 0){
                    tmp->left = newNode;
                    break;
                }
                else tmp = tmp->left;
            }else{
                if (tmp->right == 0){
                    tmp->right = newNode;
                    break;
                }
                else tmp = tmp->right;
            }
        }
    }
}

template<class T>
void BSTree<T>::remove(T val) {
    assert(contains(val));
    Node<T> * cur = findNode(val);
    if (cur->right == 0 && cur->left == 0){  //deleting a leaf node
        if (cur == root)
            root = 0;
        else {
            Node<T> * parent = findParent(val);
            if (val < parent->value)
                parent->left = 0;
            else
                parent->right = 0;
        }
        delete cur;
    }else if (cur->left == 0 && cur->right != 0){  //deleting a node with one right child
        Node<T> * parent = findParent(val);
        if (cur == root)
            root = cur->right;
        else{
            if (cur->value < parent->value)
                parent->left = cur->right;
            else
                parent->right = cur->right;
        }
        delete cur;
    }else if (cur->left != 0 && cur->right == 0){  //deleting a node with one left child
        Node<T> * parent = findParent(val);
        if (cur == root){
            root = cur->left;
        }else{
            if (cur->value < parent->value)
                parent->left = cur->left;
            else
                parent->right = cur->left;
        }
        delete cur;
    }else{                                      //deleting a node with two children
        Node<T> * minNode = findMin(cur->right);
        Node<T> * minNodeParent = findParent(minNode->value);
        cur->value = minNode->value;

        if (minNodeParent == cur)
            minNodeParent->right = minNode->right;
        else
            minNodeParent->left = minNode->right;
        delete minNode;
    }
}

template<class T>
bool BSTree<T>::contains(T val) {
    Node<T> * tmp =findNode(val);
    return tmp != 0;
}

template<class T>
Node<T> *BSTree<T>::findNode(T val) {
    Node<T> * tmp = root;
    while (tmp != 0 && val != tmp->value){
        if (val < tmp->value)
            tmp = tmp->left;
        else
            tmp = tmp->right;
    }
    return tmp;
}
template<class T>
void BSTree<T>::inOrder(Node<T> *start) {
    if (start != 0){
        inOrder(start->left);
        cout << start->value << " ";
        inOrder(start->right);
    }
}

template<class T>
void BSTree<T>::preOrder(Node<T> *start) {
    if (start != 0){
        cout << start->value << " ";
        preOrder(start->left);
        preOrder(start->right);
    }
}

template<class T>
void BSTree<T>::postOrder(Node<T> *start) {
    if (start != 0){
        postOrder(start->left);
        postOrder(start->right);
        cout << start->value << " ";
    }
}

template<class T>
BSTree<T>::~BSTree() {

}

template<class T>
Node<T> *BSTree<T>::findParent(T val) {
    Node<T>* parent = 0;
    Node<T>* cur = root;
    while (cur != 0 && cur->value != val){
        parent = cur;
        if (val < cur->value)
            cur = cur->left;
        else
            cur = cur->right;

    }
    return parent;
}

template<class T>
Node<T> *BSTree<T>::findMin(Node<T>* start) {
    Node<T> *minNode = start;
    while (minNode->left != 0){
        minNode = minNode->left;
    }
    return minNode;
}
