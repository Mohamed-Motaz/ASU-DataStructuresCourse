//
// Created by Mohamed El Zein on 5/30/21.
//
#include <iostream>
#include "rectangle.h"
using namespace std;

rectangle::rectangle() : width(0), height(0){
    cout << "new rectangle object created" << endl;
}
rectangle::rectangle(int wdth, int hgt){
    width = wdth;
    height = hgt;
}
void rectangle::setData(int wdth, int hgt) {
    width = wdth;
    height = hgt;
}
int rectangle::area() {
    return width * height;
}
rectangle::~rectangle() {
    cout << "object getting deleted";
}
