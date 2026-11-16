#include <iostream>
using namespace std;

class Animal{
public:
    Animal(){
        cout << "Ei helekkari tuolla on karhu" << endl;
    }
    virtual ~Animal(){
        cout << "Nyt se karhu mestattii" << endl;
    }
    void virtual callOut(){
        cout << "Eläin ääntelee" << endl;
    }
};

class Dog : public Animal{
public:
    Dog(){
        cout << "Hau hau jummi jammi" << endl;
    }
    ~Dog() override {
        cout << "Bye bye fido :(" << endl;
    }
    void callOut() override {
        cout << "Koira haukkuu!" << endl;
    }
};
int main()
{
    Animal animal1;
    Dog dog1;
    animal1.callOut();
    Animal* a = &dog1;
    a->callOut();
    return 0;


}
