#include <iostream>

using namespace std;

int inversione_cifre(int n){
    int cifra = 0;

    if (n != 0)cifra++;

    while (n > 0){
        cifra *= n % 10;
        n /= 10;
    }

    return cifra;
}

int main(){
    int n = 0;

    cin>>n;

    cout<<(inversione_cifre(n));



    return 0;
}