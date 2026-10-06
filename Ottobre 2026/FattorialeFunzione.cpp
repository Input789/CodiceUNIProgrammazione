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

    cin>>n;

    n = fattoriale(n);

    cout<<n;

    return 0;
}