#include <iostream>

using namespace std;

int calcoli_binari(int b1, int b2){
    int cifra_b1 = 0;
    int cifra_b2 = 0;
    int somma = 0;
    int prodotto = 0;
    int b1_prodotto = b1;
    int b2_prodotto = b2;

    while ((b1 > 0) && (b2 > 0)){
        cifra_b1 = b1 % 10;
        cifra_b2 = b2 % 10;
        b1 /= 10;
        b2 /= 10;
        if (somma != 1) somma = cifra_b1 || cifra_b2;
        if ((cifra_b1 == 1) && (cifra_b2 == 1)){
            cout<<0;
            somma = 0;

        }
        else {
            cout<<somma;
        }
    }

    cout<<endl;

    cifra_b1 = 0;
    cifra_b2 = 0;

    while ((b1_prodotto > 0) && (b2_prodotto > 0)){
        cifra_b1 = b1_prodotto % 10;
        cifra_b2 = b2_prodotto % 10;
        b1_prodotto /= 10;
        b2_prodotto /= 10;
        somma = cifra_b1 || cifra_b2;
        if ((cifra_b1 == 1) && (cifra_b2 == 1)){
            cout<<0;
            somma = 0;

        }
        else {

        }
    }

}

int main(){
    int b1 = 0;
    int b2 = 0;

    cin>>b1>>b2;


    return 0;
}