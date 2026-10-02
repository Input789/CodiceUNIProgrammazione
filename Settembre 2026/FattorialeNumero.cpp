#include <iostream>

using namespace std;

int main(){
    int n;
    int i = 1;
    int res = 1;
    cin>>n;

    while (i <= n){
        res *= i; //Per fattoriale, si parte da 1 altrimenti è sempre 0, ovviamente, 0*n = 0
        i++;
    }

    cout<<res;

    return 0;
}