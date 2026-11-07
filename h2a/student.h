#ifndef STUDENT_H
#define STUDENT_H
#include <string>
using namespace std;
class Student
{
private:
    string name;
    int studentNumber;
    double average;
public:
    void setName(string);
    void setStudentNumber(int);
    void setAverage(double);
    string getName();
    int getStudentNumber();
    double getAverage();
};


#endif // STUDENT_H
