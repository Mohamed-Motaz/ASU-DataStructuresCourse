#include <iostream>

using namespace std;

int main(){
    cout << "Hi from pointers" << endl;
    int *numPtr;
    //cout << *numPtr; throws exception or garbage according to compiler

//    int *p1 = new int(5);
//    cout << p1 << " " << *p1 << endl;  shows address and val 5

    //very important example upcoming
    int *p1 = new int;
    *p1 = 4;
    cout << "p1=" << *p1 << endl;  //4
    int *p2 = p1;
    cout << "p2=" << *p2 << endl; //4
    p1 = new int; //change address of p1, p2 is still the same
    cout << "p1=" << *p1 << endl; //garbage or 0 according to compiler
    cout << "p2=" << *p2 << endl; //still points at 4

    cout << p1 << endl;  //shows address
    delete p1; //doesnt delete pointer, but rather frees up space pointer was pointing to, pointer still maintains same address
    cout << p1 << endl; //shows same address

}