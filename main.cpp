#include <iostream>
#include <zlab06.h>

using namespace std;

#include "nisza.h"
#include "osobniki.h"
#include "sasiedztwo.h"
#include "generatorlosowy.h"

int main()
{
    while(true) {
        Srodowisko ekoSystem(80, 180);

        for(int i=0; i<10000; i++) {
            int y = GeneratorLosowy::losujOdZeraDo(180);
            int x = GeneratorLosowy::losujOdZeraDo(80);
            int wybor = GeneratorLosowy::losujOdZeraDo(4);
            switch (wybor) {
            case 1:
                ekoSystem.lokuj(new Glon(),x,y);
            break;
            case 2:
                ekoSystem.lokuj(new Grzyb(),x,y);
            break;
            case 0:
            case 3:
            case 4:
                ekoSystem.lokuj(new Bakteria(),x,y);
            break;
            }
        }

        ekoSystem.lokuj(new Glon(),0,10);
        ekoSystem.lokuj(new Glon(),1,10);
        ekoSystem.lokuj(new Glon(),1,13);
        ekoSystem.lokuj(new Glon(),3,10);
        ekoSystem.lokuj(new Grzyb(),1,11);
        ekoSystem.lokuj(new Grzyb(),0,0);
        ekoSystem.lokuj(new Grzyb(),10,10);
        ekoSystem.lokuj(new Bakteria(),3,3);
        ekoSystem.lokuj(new Bakteria(),2,6);

        unsigned long i = 0;

        do{
            system("clear");
            cout << "Krok symulacji: " << i << endl;
            cout << endl << ekoSystem << endl;
            cin.ignore(1);
            ekoSystem++;
            i++;
        } while(i < 200 && !ekoSystem);

        cout << endl;

    }
    return 0;
}












