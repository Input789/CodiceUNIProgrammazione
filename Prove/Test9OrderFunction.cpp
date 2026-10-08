#include <iostream>

using namespace std;

bool in_order(int n){
    int c = 0;
    int c2 = 0;
    if ((n == 0) || (n == 1)) return true;
    for (int i = 0; i<n; i++){
        cin>>c;
        if (c < c2) return false;
        c2 = c;
    }
    return true;
    
}

int main(){
    int n = 0;
    bool risultato = false;

    cin>>n;

    risultato = in_order(n);

    cout<<risultato;

    return 0;
}