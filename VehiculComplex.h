#ifndef _VEHICUL_COMPLEX
#define _VEHICUL_COMPLEX

#include "Automobil.h"
#include "Motocicleta.h"

#include <cstring>
using namespace std;

class VehiculComplex: public Automobil, public Motocicleta {
    int numar_roti; // numarul total de roti
    char* dotari_suplimentare; // dotari suplimentare sub formă de șir de caractere

    public:
        VehiculComplex();
        VehiculComplex(const string &, const int &, const float &, const float &, const string &, const int &, const float &, const int &, const char *);
        VehiculComplex& operator=(const VehiculComplex &);
        VehiculComplex(const VehiculComplex &);
        ~VehiculComplex();

        float getPret() const override;
        void afisare(ofstream &) const override;
};
// pretul VehiculComplex = Pret automobile + Pret Motocicleta

#endif