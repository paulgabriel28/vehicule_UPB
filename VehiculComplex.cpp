#include "VehiculComplex.h"

VehiculComplex::VehiculComplex(): numar_roti(0), dotari_suplimentare(nullptr) {}

VehiculComplex::VehiculComplex(const string &m, const int &an, const float &capacitate, const float &pretA, const string &tip, const int &viteza, const float &pretM, const int &nr_roti, const char *dotari): Automobil(m, an, capacitate, pretA), Motocicleta(tip, viteza, pretM), numar_roti(nr_roti) {
    dotari_suplimentare = new char[strlen(dotari) + 1];
    strcpy(dotari_suplimentare, dotari);
}

VehiculComplex& VehiculComplex::operator=(const VehiculComplex &veh) {
    Automobil::operator=(veh);
    Motocicleta::operator=(veh);
    
    numar_roti = veh.numar_roti;

    if(dotari_suplimentare != nullptr) {
        delete [] dotari_suplimentare;
        dotari_suplimentare = nullptr;
    }

    if(veh.dotari_suplimentare != nullptr) {
        dotari_suplimentare = new char[strlen(veh.dotari_suplimentare) + 1];
        strcpy(dotari_suplimentare, veh.dotari_suplimentare);
    } else {
        dotari_suplimentare = nullptr;  
    }
}

VehiculComplex::VehiculComplex(const VehiculComplex &veh) {
    dotari_suplimentare = nullptr;
    *this = veh;
}

VehiculComplex::~VehiculComplex() {
    delete [] dotari_suplimentare;
    numar_roti = 0;
}

float VehiculComplex::getPret() const {
    return Automobil::pret + Motocicleta::pret;
}

void VehiculComplex::afisare(ofstream &dev) const {
    Automobil::afisare(dev);
    Motocicleta::afisare(dev);
    
    dev << "\nNumar roti: " << numar_roti;
    dev << "\nDotari suplimentare: " << dotari_suplimentare;
    dev << "\nPret Total: " << getPret();

}