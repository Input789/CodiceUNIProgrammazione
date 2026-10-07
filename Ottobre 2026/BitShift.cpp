#include <iostream>

using namespace std;

int main(){
    //int a = 0;
    unsigned int a = 0; //Senza segno, il primo bit è semrpre 0, così il ciclo funziona anche coi numeri negativi

    cin>>a;

    
    cout<<(a>>1)<<endl; //Prende i bit, li shifta di 2 a destra e perde l'ultimo, è come dividere per 2
    cout<<(a<<1)<<endl; //Prende i bit, li shifta di 2 a sinistra e aggiunge un numero, è come moltiplicare per 2
    cout<<(a & 1)<<endl; //And tra a in binario e 1 in binario, mi dice se l'ultimo bit è settato, mi dice se un numero è pari o dispari
    while (a != 0){
        cout<<(a & 1); //Stampa il numero in binario
        a = (a>>1); //Shifta i bit fino a quando il numero non è 0
    }

    return 0;
}