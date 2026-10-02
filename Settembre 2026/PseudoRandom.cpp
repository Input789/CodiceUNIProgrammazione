#include <iostream>
using namespace std;
#include <cstdlib>
#include <ctime>

#define MAX 90

int main(){
    int x = 0;
    srand(time(0)); //Prende i secondi che sono passati dal 1/1/1970 e li usa come seed per non dare sempre lo stesso risultato, per quello è uno pseudorandom
    x = rand()%MAX;
    cout<<rand()%MAX<<endl; //Stampa un numero casuale tra 0 e 89 inclusi
    cout<<x<<endl; //senza srand(time(0)) stamperebbe sempre lo stesso numero e non sarebbe casuale (che comunque non lo è)


    cout<<"Orario: "<<time(0)<<endl; //I secondi passati dal 1/1/1970


    return 0;
}