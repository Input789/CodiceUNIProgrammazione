#include <iostream>
using namespace std;

int main(){
    int a = 0; //Vale per gli interi e mettere = 0 è una best practice
    double b = 0.00; //Mettere = 0 è una best practice
    cin>>a;
    cin>>b;

    cout<<"Il tuo numero è "<<a<<endl;
    cout<<"Il tuo numero è "<<b<<endl;

    cout<<"La dimensione in memoria è di "<<sizeof(a)<<endl; //sizeof() restituisce la dimensione in byte di una variabile
    cout<<"La dimensione in memoria è di "<<sizeof(b)<<endl; //Int tiene 4 byte in memoria, mentre Double 8

    return 0;
}