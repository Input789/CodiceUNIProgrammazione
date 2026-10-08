#include <iostream>
#include <cmath>

using namespace std;

void equazioni_secondo_grado (double a, double b, double c, double &x1, double &x2){
    double delta = 0;
    double z = 0;

    delta = (pow(b, 2)) - ((4*a)*c);

    x1 = (-b + sqrt(delta)) / (2*a);

    x2 = (-b - sqrt(delta)) / (2*a);

    if (x1 > x2){
        z = x1;
        x1 = x2;
        x2 = z;
    }

}

int main(){
    double a, b, c = 0;
    double x1, x2 = 0;

    cin>>a>>b>>c;

    equazioni_secondo_grado(a, b, c, x1, x2);

    cout<<x1<<" "<<x2;

    return 0;
}