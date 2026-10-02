#include <iostream>
using namespace std;

int main(){
    char x, y, z;
    int a, b = 0;
    double c, d = 0.00;
    cin>>x >> y;

    cin>>a>>b;

    cin>>c>>d;

    z = x; 
    x = y;
    y = z;

    a = a + b;
    b = a - b;
    a = a - b;

    c = c + d;
    d = c - d;
    c = c - d;

    cout<<x<<y<<endl; //Scambia i valori

    cout<<a<<b<<endl; //Scambia i valori

    cout<<c<<d<<endl; //Scambia i valori
    return 0;
}