# Problema Vehicule

#### Considerați următoarele tipuri de vehicule: automobil (Automobil), motocicletă (Motocicleta) și vehicul complex (VehiculComplex) care poate combina caracteristicile unui automobil și ale unei motociclete.

```cpp
class Automobil {
protected:
    string marca; // marca automobilului
    int an_fabricatie; // anul fabricatiei
    float capacitate_motor; // capacitatea motorului in litri
    float pret; // pretul automobilului
};
```

```cpp
class Motocicleta {
protected:
    string tip_motor; // tipul motorului: electric, benzina, etc.
    int viteza_maxima; // viteza maxima in km/h
    float pret; // pretul motocicletei
};
```

```cpp
class VehiculComplex: public Automobil, public Motocicleta {
int numar_roti; // numarul total de roti
char* dotari_suplimentare; // dotari suplimentare sub formă de șir de caractere
};
// pretul VehiculComplex = Pret automobile + Pret Motocicleta
```

#### Cerinte:
1. Creați un vector folosind clasa vector din STL care să poată conține obiecte de tip: Automobil,
Motocicleta și VehiculComplex. Obiectele din vector trebuie să aibă valori precizate de voi.
2. Sortați vectorul în funcție de anul prețul vehiculului.
3. Parcurgeți vectorul și afișați toate atributele obiectelor într-un fișier.

* (Tineți cont de regulile de bună implementare și reutilizare a codului!)