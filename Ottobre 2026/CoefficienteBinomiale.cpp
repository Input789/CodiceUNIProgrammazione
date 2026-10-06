#include <iostream>

using namespace std;

int fattoriale (int n){
    int f = 1;
    int n2 = n;
    for (int i = 1; i<=n; i++){
        f *= n2;
        n2--;
    }
    return f;
}

int main(){
    int n = 0;
    int k = 0;
    int z = 0;
    int y = 0;

    cin>>n>>k;

    y = n - k;

    n = fattoriale (n);
    k = fattoriale (k);
    z = fattoriale(y);

    y = n/(k*z);

    cout<<y;

    return 0;
}