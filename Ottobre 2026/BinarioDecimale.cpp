#include <iostream>

using namespace std;

void conversione (int x){
    int decimale = 0;
    int potenza = 1;
    int cifra = 0;

    while (x > 0){
        cifra = x % 10;
        decimale += cifra * potenza;
        potenza *= 2;
        x /= 10;
    }

    cout<<decimale;

}

int main(){
    int binario = 0;
    cin>>binario;

    conversione(binario);
    


    return 0;
}