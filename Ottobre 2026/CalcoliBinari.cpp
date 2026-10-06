#include <iostream>

using namespace std;

int somma_binaria(int b1, int b2) {
    int risultato = 0;
    int posizione = 1;
    int riporto = 0;

    while (b1 > 0 || b2 > 0 || riporto > 0) {
        int cifra1 = b1 % 10;
        int cifra2 = b2 % 10;

        int somma = cifra1 + cifra2 + riporto;

        if (somma == 0) {
            riporto = 0;
        }
        else if (somma == 1) {
            risultato += posizione;
            riporto = 0;
        }
        else if (somma == 2) {
            riporto = 1;
        }
        else {
            risultato += posizione;
            riporto = 1;
        }

        b1 /= 10;
        b2 /= 10;
        posizione *= 10;
    }

    return risultato;
}

int prodotto_binario(int b1, int b2) {
    int risultato = 0;
    int moltiplicatore = 1; // Usato per "shiftare" i numeri (x1, x10, x100)

    while (b2 > 0) {
        int cifra = b2 % 10;

        if (cifra == 1) {
            // Calcola il prodotto parziale aggiungendo gli zeri necessari
            int prodotto_parziale = b1 * moltiplicatore;
            // Somma il risultato parziale usando l'addizione binaria
            risultato = somma_binaria(risultato, prodotto_parziale);
        }

        b2 /= 10;
        moltiplicatore *= 10;
    }

    return risultato;
}

int main() {
    int b1, b2;

    cin >> b1 >> b2;

    cout << "Somma: " << somma_binaria(b1, b2) << endl;
    cout << "Prodotto: " << prodotto_binario(b1, b2) << endl;

    return 0;
}