#include <iostream>

using namespace std;

int main(){
    int n1, n2 = 0;
    int somma = 0;
    cin>>n1>>n2;

    for (int i = n1; i <= n2; i++){
        for (int j = 1; j<i; j++){
            if (i % j == 0)somma += j;
        }
        if (somma == i) cout<<i<<endl;
        somma = 0;
    }

    return 0;
}