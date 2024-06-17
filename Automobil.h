#ifndef _AUTOMOBIL
#define _AUTOMOBIL

#include "Vehicul.h"

#include <string>
#include <iostream>
using namespace std;

class Automobil: virtual public Vehicul {
    protected:
        string marca; // marca automobilului
        int an_fabricatie; // anul fabricatiei
        float capacitate_motor; // capacitatea motorului in litri
        float pret; // pretul automobilului

    public:
        Automobil() = default;
        Automobil(const string &, const int &, const float &, const float &);
        
        float getPret() const override;
        void afisare(ofstream &) const override;
};

#endif