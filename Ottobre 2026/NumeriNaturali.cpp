#include <iostream>

using namespace std;

int main(){
    int n = 0;
    int somma = 0;

    cin>>n;

    for (int i = 0; i<n; i++) somma += i;

    cout<<somma;

    return 0;
}