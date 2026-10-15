#include <iostream>

using namespace std;

int parola (char a[], int len, int n, char b[]){
    int cont = 0;
    bool found = false;
    int z = 0;
    for (int i = 0; i<len; i++){
        if (a[i] != ' ' && ((i == 0) || (a[i - 1] == ' '))){
            cont ++;
            if (cont == n){
                for (int j = i; (j < len) && (a[j] != ' '); j++){
                    b[z] = a[j];
                    z++;
                }
                found = true;
            }
        }
    }
    cont = 0;
    z = 0;
    while (b[z] != '.'){
        cont++;
        z++;
    }
    if (found) return cont;
    else return 0;
}

#define len 14
int main(){
    char a[len];
    char b[len];
    int res = 0;
    int n = 0;

    for (int i = 0; i<len; i++){
        cin.get(a[i]);
        b[i] = '.';
    }

    cin>>n;

    res = parola(a, len, n, b);
    cout<<res;

}