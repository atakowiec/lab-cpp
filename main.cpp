#include <iostream>
#include <zlab06.h>

using namespace std;

int main()
{
  Kwadrat kwadrat("Kwadrek",4);
  Prostokat prostokat("Prostak",2,4);

  Prostokat * wskaznikDoProstokat;

  wskaznikDoProstokat = &prostokat;

  cout << wskaznikDoProstokat->doTekstu() << endl << endl;

  wskaznikDoProstokat = &kwadrat;
  cout << wskaznikDoProstokat->doTekstu()<< endl << endl;

  return 0;
}

//int main()
//{

//    Kwadrat kwadrat("Kwadrek",4);
//    Prostokat prostokat("Prostak",2,4);

//    Prostokat & referencjaDoProstokat1 = prostokat;

//    cout << referencjaDoProstokat1.doTekstu()
//         << endl << endl;

//    Prostokat & referencjaDoProstokat2 = kwadrat;

//    cout << referencjaDoProstokat2.doTekstu()
//         << endl << endl;

//    return 0;
//}

//string nazwaRodzaju(RodzajMieszkanca rodzaj) {
//    switch (rodzaj) {
//    case GLON: return "GLON";
//    case GRZYB: return "GRZYB";
//    case BAKTERIA: return "BAKTERIA";
//    case PUSTKA: return "PUSTKA";
//    case SCIANA: return "ŚCIANA";
//    case TRUP: return "TRUP";
//    case NIEZNANE: return "NIEZNANE";
//    }
//    return nullptr;
//}

//int main() {
//    Sasiedztwo sasiedztwo;

//    sasiedztwo.okreslSasiada(P,GLON);
//    sasiedztwo.okreslSasiada(PG,GRZYB);
//    sasiedztwo.okreslSasiada(G,GRZYB);
//    sasiedztwo.okreslSasiada(LG,GLON);
//    sasiedztwo.okreslSasiada(L,BAKTERIA);
//    sasiedztwo.okreslSasiada(LD,BAKTERIA);
//    sasiedztwo.okreslSasiada(D,GLON);
//    sasiedztwo.okreslSasiada(PD,PUSTKA);

//    cout << "Przegląd sąsiedztwa:" << endl;

//    for(int i=0; i<8; i++){

//        Polozenie p = static_cast<Polozenie>(i);
//        RodzajMieszkanca
//                r = sasiedztwo.ktoJestSasiadem(p);

//        cout << "polozenie=" << p << " rodzaj="
//             << nazwaRodzaju(r) << endl;
//    }

//    cout << endl << "Policzenie sasiadów"
//         << "określonego rodzaju:" << endl
//         << " glony=" << sasiedztwo.ile(GLON) << endl
//         << " grzyby=" << sasiedztwo.ile(GRZYB) << endl
//         << " trupy=" << sasiedztwo.ile(TRUP) << endl;

//    cout << endl << "Wylosowanie sasiada:" << endl
//         << " glon -> "
//         << sasiedztwo.losujSasiada(GLON) << endl
//         << " pustka -> "
//         << sasiedztwo.losujSasiada(PUSTKA) << endl
//         << " trup -> "
//         << sasiedztwo.losujSasiada(TRUP) << endl;


//    long wiersz, kolumna;
//    cout << endl
//         << "Zmiana indeksów [5][7]"
//         << "wg polozenia:" << endl;

//    for(int i=0; i<8; i++){

//        Polozenie p = static_cast<Polozenie>(i);
//        wiersz = 5; kolumna = 7;

//        Sasiedztwo::zmienIdeksyWgPolozenia(p,wiersz,kolumna);

//        cout << " położenie: " << p << " ->[" << wiersz
//             << "][" << kolumna << "]" << endl;
//    }

//    cout << endl;

//    return 0;
//}
