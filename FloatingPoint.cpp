#include <iostream>
using namespace std;

//Libreria cmath
#include <cmath>

int main(){
    double euro = 0.00; //Programma che separa la parte intera dalla parte decimale indicando partendo da degli euro e dei centesimi gli euro ed i centesimi
    cin>>euro;

    cout<<"Euro "<<int(euro)<<endl; //Parte euro con cast
    cout<<"Centesimi "<<round((euro-int(euro))*100)<<endl; //Parte centesimi con calcolo matematico
}