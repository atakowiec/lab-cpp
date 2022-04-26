#ifndef USTAWIENIA_H
#define USTAWIENIA_H

#endif // USTAWIENIA_H

enum RodzajMieszkanca {GLON, GRZYB, BAKTERIA, PUSTKA, SCIANA, TRUP, NIEZNANE};
enum AkcjaMieszkanca {POTOMEK, POLOWANIE, ROZKLAD, NIC};
enum Polozenie {P=0, PG=1, G=2, LG=3, L=4, LD=5, D=6, PD=7, NIGDZIE=8 };

class UstawieniaSymulacji
{
public:
    const char
        znakGlon = '*',
        znakGrzyb ='#',
        znakBakteria ='@',
        znakTrup = '+',
        znakNieokreslony ='?',
        znakPustaNisza = '_',
        znakSeparator = ' ';

    unsigned short
        glonzycieMin = 5,
        glonzycieMax =10,
        glonkosztPotomka = 2,
        glonLimitPosilkow = 6,

        grzybzycieMin = 40,
        grzybzycieMax = 60,
        grzybkosztPotomka = 3,
        grzybLimitPosilkow = 30,

        bakteriazycieMin = 25,
        bakteriazycieMax = 40,
        bakteriakosztPotomka = 3,
        bakterialimitPosilkow = 10;


    bool poprawnyZnakNiszy(char znak) const
    {
        return znak == znakGlon ||
                 znak == znakGrzyb ||
                 znak == znakBakteria ||
                 znak == znakTrup ||
                 znak == znakPustaNisza;
    }

    bool poprawnySeparator (char znak) const
    {
        return znak == znakSeparator;
    }
    private:
        UstawieniaSymulacji(){}
        UstawieniaSymulacji(UstawieniaSymulacji&);
    public:
    static UstawieniaSymulacji & pobierzUstawienia()
    {
        static UstawieniaSymulacji ustawienia;
        return ustawienia;
    }
};
