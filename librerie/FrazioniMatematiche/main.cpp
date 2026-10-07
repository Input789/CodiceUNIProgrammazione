#include <iostream>
#include "frazioni.h"

using namespace std;

int main(){
    int numeratore, denominatore = 0;
    int numeratore2, denominatore2 = 0;

    leggi_frazione(numeratore, denominatore);
    riduci(numeratore, denominatore);
    stampa_frazione(numeratore, denominatore);

    leggi_frazione(numeratore, denominatore);
    leggi_frazione(numeratore2, denominatore2);

    riduci(numeratore, denominatore);
    riduci(numeratore2, denominatore2);

    somma(numeratore, denominatore, numeratore2, denominatore2);
    riduci(numeratore2, denominatore2);

    stampa_frazione(numeratore2, denominatore2);

    leggi_frazione(numeratore, denominatore);
    leggi_frazione(numeratore2, denominatore2);
    
    riduci(numeratore, denominatore);
    riduci(numeratore2, denominatore2);

    prodotto(numeratore, denominatore, numeratore2, denominatore2);
    riduci(numeratore2, denominatore2);

    stampa_frazione(numeratore2, denominatore2);
    

    return 0;
}