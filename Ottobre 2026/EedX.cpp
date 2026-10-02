#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int x = 0;
    double n = 0;
    int calcolo = 0;
    int fact = 1;
    double e = 0;

    cout<<"Inserire la x: ";
    cin>>x;

    cout<<"Inserire la n: ";
    cin>>n;

    calcolo = 1 + x;

    for (int i = 2; i<=n; i++){
        for (int j = 2; j<=i; j++){
            fact *= j;
        }
        calcolo += pow(x, i)/fact;

        fact = 1;
    }

    e = exp(x);

    cout<<calcolo<<" "<<e;


    return 0;
}