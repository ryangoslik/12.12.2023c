#include <iostream>
#include <vector>
using namespace std;
int suma;
class zakupy {
public:
    
    string pieczywo;
    string nabial;
    string warzywa;
    int cena1;
    int cena2;
    int cena3;
    zakupy( string pieczywo, string nabial, string warzywa, int cena1, int cena2, int cena3) {
        this->pieczywo = pieczywo;
        this->nabial = nabial;
        this->warzywa = warzywa;
        this->cena1 = cena1;
        this->cena2 = cena2;
        this->cena3 = cena3;
    };
};



int main()
{
    vector <zakupy> tablica;
    int liczbaproduktow;
    cout << "podaj liczbe po ile produktów z każdej kategorii mam dodac do Vectora"; cin >> liczbaproduktow;
    for (size_t i = 0; i < liczbaproduktow; i++)
    {
        string pieczywo;
        string nabial;
        string warzywa;
        int cena1;
        int cena2;
        int cena3;
        cout << "nr" << i + 1 << " podaj nazwe produktu  pieczywa = "; cin >> pieczywo;
        cout << "nr" << i + 1 << " podaj cene produktu  pieczywa = "; cin >> cena1;
        cout << "nr" << i + 1 << " podaj nazwe produktu nabial = "; cin >> nabial;
        cout << "nr" << i + 1 << " podaj cene produktu  nabial = "; cin >> cena2;
        cout << "nr" << i + 1 << " podaj nazwe produktu warzywa = "; cin >> warzywa;
        cout << "nr" << i + 1 << " podaj cene produktu  warzywa = "; cin >> cena3;
        tablica.push_back(zakupy(pieczywo, nabial, warzywa, cena1, cena2, cena3));
    }
    for (size_t i = 0; i < tablica.size(); i++)
    {
        cout << "pieczywo: " << tablica[i].pieczywo
            << " nabial: " << tablica[i].nabial
            << " warzywa: " << tablica[i].warzywa 
            << "cena pieczywo: " << tablica[i].cena1
            << " cena nabial: " << tablica[i].cena2
            << " cena warzywa: " << tablica[i].cena3 << endl;
        suma = suma + tablica[i].cena1 + tablica[i].cena2 + tablica[i].cena3;
        cout << "cena = " << suma;
    }
    return EXIT_SUCCESS;
}




