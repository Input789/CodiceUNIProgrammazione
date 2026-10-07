#include <iostream>

using namespace std;

void leggi_frazione(int &numeratore, int &denominatore){
    cout<<"Inserisci numeratore: ";
    cin>>numeratore;
    do{
        cout<<"Inserisci denominatore: ";
        cin>>denominatore;
    }while (denominatore == 0);
}

void stampa_frazione(int numeratore, int denominatore){
    cout<<numeratore<<"/"<<denominatore<<endl;
}



int mcd(int x, int y){
    //mcd (x, y) = mcd(y, x&y)
    int modulo = 0;
    while (y != 0){
        modulo = x%y;
        x = y;
        y = modulo;
    }

    return x;
}

void riduci(int &numeratore, int &denominatore){
    int m = mcd(numeratore, denominatore);
    int segno = 0;
    if(numeratore*denominatore < 0)segno = -1;
    else segno = 1;
    //segno = -1* (numeratore * denominatore < 0);
    numeratore = segno*abs (numeratore/m);
    denominatore = abs (denominatore/m);
}

void somma(int &numeratore, int &denominatore, int &numeratore2, int &denominatore2){
    bool mcm = false;

    for (int i = 1; !mcm; i++){
        if ((i % denominatore == 0) && (i % denominatore2 == 0)){
            numeratore = (i / denominatore) * numeratore;
            numeratore2 = (i / denominatore2) * numeratore2;

            numeratore2 += numeratore;

            denominatore2=i;

            mcm = true;
        }
    }
}

void prodotto(int &numeratore, int &denominatore, int &numeratore2, int &denominatore2){
    numeratore2 *= numeratore;
    denominatore2 *= denominatore;
}