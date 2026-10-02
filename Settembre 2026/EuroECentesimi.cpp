#include <iostream>
#include <cmath>

using namespace std;

int main(){

    double prezzo = 0.00;
    int resto = 0.00;

    cout<<"Inserisci il prezzo: "<<endl;

    cin>>prezzo;
    
    prezzo *= 100;

    int prezzoArrotondato = static_cast<int>(round(prezzo));

    cout<<prezzoArrotondato<<endl;

    cout<<"Monete da 2 euro: "<<prezzoArrotondato / 200<<endl;
    resto = prezzoArrotondato % 200;

    cout<<"Monete da 1 euro: "<<resto / 100<<endl;
    resto = resto % 100;

    cout<<"Monete da 50 centesimi: "<<resto / 50<<endl;
    resto = resto % 50;

    cout<<"Monete da 20 centesimi: "<<resto / 20<<endl;
    resto = resto % 20;

    cout<<"Monete da 10 centesimi: "<<resto / 10<<endl;
    resto = resto % 20;

    cout<<"Monete da 5 centesimi: "<<resto / 5<<endl;
    resto = resto % 5;

    cout<<"Monete da 2 centesimi: "<<resto / 2<<endl;
    resto = resto % 2;

    cout<<"Monete da 1 centesimo: "<<resto<<endl;



    return 0;
}