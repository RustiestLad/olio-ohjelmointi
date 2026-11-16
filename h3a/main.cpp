#include <iostream>
#include <string>
using namespace std;

class Chef{
protected:
    string name;
public:
    Chef(string value){
        name = value;
        cout << "Chef " << name << " konstruktori" << endl;

    }
    ~Chef(){
        cout << "Chef " << name << " destruktori" << endl;
    }
    void makeSalad(){
        cout << "Chef " << name << " makes  salad" << endl;
    }
    void makeSoup(){
        cout << "Chef " << name << " makes soup" << endl;
    }
};

class ItalianChef : public Chef{
public:
    ItalianChef(string value);
    ~ItalianChef(){
        cout << "Italian " << name << "destruktori" << endl;
    }
    string GetName(){
        cout << name << endl;
        return name;
    }
    void makePasta(){
        cout << "Italian Chef " << name << "makes pasta" << endl;
    }
};

ItalianChef::ItalianChef(string value) : Chef(value){
    cout << "Italian Chef " << name << "constructor" << endl;
}
int main()
{
    Chef chef1("Gordon Ramsay");
    chef1.makeSalad();
    chef1.makeSoup();

    ItalianChef chef2("Anthony Bourdain");
    chef2.GetName();
    chef2.makeSalad();
    chef2.makeSoup();
    chef2.makePasta();
}
