#include <iostream>

using namespace std;

int mix (int a, int b){
    int c = 0;
    int a2, b2 = 0;
    int cont = 1;

    while ((b != 0) || (a != 0)){
        if (a != 0){
            a2 = a % 10;
            a /= 10;
        }
        else{
            a2 = 0;
        }
        c += a2 * cont;
        cont *= 10;

        if (b != 0){
            b2 = b % 10;
            b /= 10;
        }
        else{
            b2 = 0;
        }
        c += b2 * cont;
        cont *= 10;
    }

    return c;
}

int main(){
    int a, b, c = 0;

    cin>>a;
    cin>>b;

    c = mix (a,b);

    cout<<c;


    return 0;
}