#include "car.h"
#include <iostream>
using namespace std;

void Car::printData(){
    cout << "Brand:" << brand << endl;
    cout << "Model:" << model << endl;
    cout << "Year" << yearModel << endl;
}

void Car::setBrand(string newBrand){
    brand = newBrand;
}

void Car::setModel(string newModel){
    model = newModel;
}
void Car::setYearModel(int newYear){
    yearModel = newYear;
}
