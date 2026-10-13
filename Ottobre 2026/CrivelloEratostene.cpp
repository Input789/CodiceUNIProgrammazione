#include <iostream>

using namespace std;

void numeri_primi(bool *a, int *a2, int n){
    for (int i = 2; i<n; i++){
        if (a[i] == true){
            for (int j = i + 1; j<n; j++){
                if (a2[j] % i == 0){
                    a[j] = false;
                }
            }
        }

    }
}

int n = 0;

int main(){

    cin>>n;

    bool a[n];
    int a2[n];


    for(int i = 0; i<n; i++){
        a[i] = true;
        a2[i] = i;
        if (a2[i] == 1 || a2[i] == 0) a[i] = false;
    }

    numeri_primi(a, a2, n);

    for (int j = 0; j<n; j++){
        if (a[j] == true) cout<<a2[j]<<endl;
    }
    for (int j = 0; j<n; j++){
        cout<<a[j]<<" ";
    }


    return 0;
}
