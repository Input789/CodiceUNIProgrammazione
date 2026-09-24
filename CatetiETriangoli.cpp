#include <iostream>
using namespace std;

#include <cmath>

int main(){
    double c1, c2 = 0.00;
    double ipotenusa = 0.00;

    cout<<"Inserisci i due cateti: "<<endl;

    cin>>c1>>c2;

    ipotenusa = (c1*c1) + (c2*c2);

    cout<<sqrt(ipotenusa);

    return 0;
}