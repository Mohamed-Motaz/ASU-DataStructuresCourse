#include <iostream>
using namespace std;

#include "rectangle.h"

int main(){
    cout << "Hello from classes" << endl;
    rectangle r;
    cout << r.area() << endl;
    r.setData(5, 6);
    cout << r.area() << endl;

    int arr[] = {1,2,3};
    int *ptr = arr;
    cout << *arr << " " << *(arr + 1) << endl;
}

