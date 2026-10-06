#include <iostream>

using namespace std;

void tartaglia (int n){
    int n2 = n;
    int valore = 0;
    int i2, j2, z2 = 0;
    for (int i = 0; i<=n; i++){
    for (int z = n2; z!=0; z--){
        cout<<" ";
    }
    n2--;
    valore = 1;
    for (int j = 0; j<=i; j++){
        cout<<valore;
        valore = valore * (i - j)/(j + 1);

    }
    //cout<<1;
    cout<<endl;
}

}

int main(){
    int n = 0;

    cin>>n;

    tartaglia(n);


    return 0;
}