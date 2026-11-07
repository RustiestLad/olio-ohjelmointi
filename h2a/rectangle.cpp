#include "rectangle.h"
#include <iostream>
using namespace std;

double Rectangle::getArea(){
    double resultA = width * height;
    return resultA;
}

double Rectangle::getCircum(){
    double resultC = 2 * (width + height);
    return resultC;
}

void Rectangle::setWidth(double newWidth){
    width = newWidth;
}

void Rectangle::setHeight(double newHeight){
    height = newHeight;
}
