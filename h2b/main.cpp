using namespace std;
#include "car.h"
#include <iostream>
#include <vector>

int main()
{
    vector<Car> carList;
    carList.emplace_back("Lada", "Babushka", 1955);
    carList.emplace_back("Sisu", "Väinämöinen", 2030);
    carList.emplace_back("Dodge", "Jefferson", 2300);

    carList[1].printData();

    for(int x = 0; x < carList.size(); x++){
        carList[x].printData();
    }
}
