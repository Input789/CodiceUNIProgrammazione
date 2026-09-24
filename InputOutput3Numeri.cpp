#include <iostream>
using namespace std;

int main(){

    int a, b, c = 0;
    cout<<"Inserisci il primo numero: ";
    cin>>a;
    cout<<"Inserisci il secondo numero: ";
    cin>>b;
    cout<<"Inserisci il terzo numero: ";
    cin>>c;

    cout<<'\t'<<a<<'\t'<<b<<'\t'<<c<<'\t'<<endl;

    cout<<a<<'\t'<<a - a<<'\t'<< a - b<<'\t'<< a-c<<endl; //Ovviamente in futuro verrà fatto con i for, ma per ora seguo il passo delle lezioni
    cout<<b<<'\t'<<b - a<<'\t'<< b - b<<'\t'<< b-c<<endl;
    cout<<c<<'\t'<<c - a<<'\t'<< c - b<<'\t'<< c-c<<endl; 



    return 0;
}