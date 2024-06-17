#ifndef _VEHICUL
#define _VEHICUL

#include <istream>
#include <fstream>
using namespace std;

class Vehicul {
    public:
        Vehicul() = default;
        virtual float getPret() const = 0;
        virtual void afisare(ofstream &) const = 0;
        friend ofstream& operator<<(ofstream &, const Vehicul *);
        virtual ~Vehicul();
};

#endif