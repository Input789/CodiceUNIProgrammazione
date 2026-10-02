#include <iostream>

using namespace std;

int main(){
    int n = 0;
    int n2 = 0;
    int valore = 0;
    int i2, j2, z2 = 0;

    cin>>n;

    n2 = n;

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

    n2 = n;

    z2 = n2;
    i2 = 0;

    while (i2<=n){
        while (z2 != 0){
            cout<<" ";
            z2--;
        }
        n2--;
        valore = 1;
        j2 = 0;
        while (j2 <= i2){
            cout<<valore;
            valore = valore * (i2-j2)/(j2 + 1);
            j2++;
        }
        cout<<endl;
        i2++;
    }

    return 0;
}