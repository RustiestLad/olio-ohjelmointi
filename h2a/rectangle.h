#ifndef RECTANGLE_H
#define RECTANGLE_H



using namespace std;

class Rectangle
{
private:
    double width;
    double height;

public:
    double getArea();
    double getCircum();
    void setWidth(double);
    void setHeight(double);
};


#endif // RECTANGLE_H
