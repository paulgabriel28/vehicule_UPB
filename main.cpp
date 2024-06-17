#include <iostream>
#include <fstream>
#include <vector>
#include <string>

#include "Vehicul.h"
#include "Automobil.h"
#include "Motocicleta.h"
#include "VehiculComplex.h"

using namespace std;

void sortVehicule(std::vector<Vehicul*> &);

int main()
{
    // 1.
    vector<Vehicul*> vec;
    vec.push_back(new Automobil("BMW", 2012, 4.0, 12500));
    vec.push_back(new Motocicleta("Honda", 260, 9500));
    vec.push_back(new VehiculComplex("BMW", 2012, 4.5, 12000, "I33", 260, 9000, 4, "e frumoasa masina mea rosie"));

    // 2.
    sortVehicule(vec);

    // 3.
    ofstream f("vehicule.txt", ios::out);
    for(vector<Vehicul*>::iterator it = vec.begin(); it != vec.end(); it++) {
        f << *it;
        f << "\n----------";
    }

    cout << "\nProgram finalizat cu succes!";
    return 0;
}

void sortVehicule(std::vector<Vehicul*>& vec) {
    for (auto it = vec.begin(); it != vec.end(); it++) {
        for (auto jt = it + 1; jt != vec.end(); jt++) {
            if ((*it)->getPret() > (*jt)->getPret()) {
                swap(*it, *jt);
            }
        }
    }
}