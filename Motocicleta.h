#ifndef _MOTOCICLETA
#define _MOTOCICLETA

#include "Vehicul.h"

#include <string>
using namespace std;

class Motocicleta: virtual public Vehicul {
    protected:
        string tip_motor; // tipul motorului: electric, benzina, etc.
        int viteza_maxima; // viteza maxima in km/h
        float pret; // pretul motocicletei

    public:
        Motocicleta() = default;
        Motocicleta(const string &, const int &, const float &);

        float getPret() const override;
        void afisare(ofstream &) const override;
};

#endif