//
// Created by Mohamed El Zein on 5/30/21.
//

#ifndef DATASTRUCTURES_RECTANGLE_H
#define DATASTRUCTURES_RECTANGLE_H


class rectangle {
private:
    int width;
    int height;
public:
    rectangle();
    rectangle(int, int);
    int area();
    void setData(int, int);
    ~rectangle();
};


#endif //DATASTRUCTURES_RECTANGLE_H
