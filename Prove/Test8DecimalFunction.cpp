#include <iostream>

using namespace std;

double decimal (double &x){
    while (x >= 1){
        x /= 10;
    }
    return x;
}

int main(){
    double x = 0.00;

    cin>>x;

    x = decimal(x);

    cout<<x;


    return 0;
}