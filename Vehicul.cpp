#include "Vehicul.h"

Vehicul::~Vehicul() {}

ofstream& operator<<(ofstream &dev, const Vehicul *veh) {
    veh->afisare(dev);
    return dev;
}