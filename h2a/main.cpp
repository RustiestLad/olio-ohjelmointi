using namespace std;
#include "car.h"
#include "rectangle.h"
#include "student.h"
#include <iostream>
#include <memory>
int main()
{
    Car car1;
    car1.setBrand("Lada");
    car1.setModel("Babushka");
    car1.setYearModel(1955);
    car1.printData();

    Rectangle* rectangle = new Rectangle();
    rectangle->setHeight(5);
    rectangle->setWidth(7);
    double resultA = rectangle->getArea();
    double resultC = rectangle->getCircum();
    cout << "Pinta-ala:" << resultA << endl;
    cout << "Ympärysmitta:" << resultC << endl;
    delete rectangle;

    unique_ptr<Student> objStudent = make_unique<Student>();
    objStudent->setName("Jorma");
    objStudent->setStudentNumber(10);
    objStudent->setAverage(2.6);

    string Nimi = objStudent->getName();
    int ID = objStudent->getStudentNumber();
    double Average = objStudent->getAverage();

    cout << "Etsimäsi opiskelija on" << endl << Nimi << endl << ID << endl << Average << endl;

    return 0;
}
