#include "Motocicleta.h"

Motocicleta::Motocicleta(const string &tip, const int &viteza, const float &p): tip_motor(tip), viteza_maxima(viteza), pret(p) {}

float Motocicleta::getPret() const {
    return pret;
}

void Motocicleta::afisare(ofstream &dev) const {
    dev << "\nTip Motor: " << tip_motor;
    dev << "\nViteza maxima: " << viteza_maxima << " km/h";
    dev << "\nPret [M]: " << pret;
}