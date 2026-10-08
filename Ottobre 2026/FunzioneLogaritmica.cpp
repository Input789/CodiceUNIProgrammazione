#include <iostream>
#include <cmath>

using namespace std;

double ln (double x){
    double x2 = 0;
    x --;
    x2 = x;

    for (int i = 2; i<=50; i++){
        if (i % 2 == 0) x2 -= (pow(x, i)) / i; 
        else x2 += (pow(x, i)) / i;
    }

    return x2;
}

int main(){
    double x = 0;

    do{
        cin >> x;
    }while ((x <= -1) || (x > 1));

    x = ln (x + 1);

    cout << x;

    return 0;
}