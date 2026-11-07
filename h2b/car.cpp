#include "car.h"
#include <iostream>
using namespace std;
#include <string>

void Car::printData(){
    cout << "Brandi " << brand << endl;
    cout << "Malli " << model << endl;
    cout << "Vuosimalli " << yearModel << endl;
}
