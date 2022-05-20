#ifndef ZLAB03_H
#define ZLAB03_H

#include <iostream>
using namespace std;

class Prostokat {
protected:
    string nazwa;
    double bok1, bok2;
    bool poprawny;
    double obwod, pole;
    bool czyPoprawny(double bok1, double bok2);
    void obliczObwod();
    void obliczPole();

public:
    Prostokat & operator++(int);
    Prostokat(string n="?", double a=1, double b=2);
    virtual ~Prostokat();
    bool czyPoprawny();
    const string& jakaNazwa();
    double podajPole();
    double podajObwod();
    bool zmienBoki(double a, double b);
    bool operator!() {return czyPoprawny();}

    virtual std::string doTekstu();
};

std::ostream& operator<<(std::ostream & strumien,
 Prostokat & prostokat);

std::istream& operator>>(std::istream & strumien,
 Prostokat & prostokat);

#endif // ZLAB03_H
