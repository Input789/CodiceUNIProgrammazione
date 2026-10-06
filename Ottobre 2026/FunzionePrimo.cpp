#include <iostream>

using namespace std;

bool isPrimo(int n){
    if (n == 2)return false;
    for (int i = 2; i<n; i++){
        if (n % 2 == 0) return false;
    }
    return true;
}

int main(){
    int n = 0;
    bool primo = false;

    cin>>n;

    primo = isPrimo(n);

    if (primo)cout<<"primo";
    else cout<<"non primo";


    return 0;
}