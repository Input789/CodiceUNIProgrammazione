#include <iostream>

using namespace std;

int main(){
    int n = 255;
    char c = '.';

    while (n >= 0){
        c = n;
        cout<<"Numero: "<<n<<" Carattere: "<<c<<endl;
        n --;
    }
}