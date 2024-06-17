#include "Automobil.h"

Automobil::Automobil(const string &m, const int &an, const float &motor, const float &p): marca(m), an_fabricatie(an), capacitate_motor(motor), pret(p) {}

float Automobil::getPret() const {
    return pret;
}

void Automobil::afisare(ofstream &dev) const {
    dev << "\nMarca: " << marca;
    dev << "\nAn Fabricatie: " << an_fabricatie;
    dev << "\nCapacitate motor: " << capacitate_motor;
    dev << "\nPret [A]: " << pret;
}