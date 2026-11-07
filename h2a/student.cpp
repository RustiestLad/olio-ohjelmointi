#include "student.h"

void Student::setName(string newName) {
    name = newName;
}
void Student::setStudentNumber(int newNumber){
    studentNumber = newNumber;
}
void Student::setAverage(double newAverage){
    average = newAverage;
}

string Student::getName(){
    return name;
}
int Student::getStudentNumber(){
    return studentNumber;
}

double Student::getAverage(){
    return average;
}
