#include <iostream>

using namespace std;

int main(){
    int i, n, n1, n2 = 0;
    cin>>i;
    if (i == 0)cout<<0;
    else if (i == 1)cout<<1;
    else{
        n = 0;
        n1 = 1;
        while (i >= 2){
            n2 = n1 + n; //Sequenza di Fibonacci
            n = n1; //Shifto
            n1 = n2;
            i = i - 1;
        }
    }
    cout<<n2;
    return 0;
}