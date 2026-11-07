#ifndef CAR_H
#define CAR_H
#include <string>
using namespace std;

class Car
{
public:
    string brand;
    string model;
    int yearModel;
    void printData();
    Car(string brand, string model, int yearModel){
        this->brand = brand;
        this->model = model;
        this->yearModel = yearModel;
    }
};

#endif // CAR_H
