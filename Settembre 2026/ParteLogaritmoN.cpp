#include <iostream>

using namespace std;

int main(){
    int n = 0;
    int i = 1;
    int i2 = 1;
    int res = 0;


    cin>>n;
    while ((i2 * 2) <= n){
        i2 *= 2;
        res = i;
        i++;
    }

    cout << res;

    return 0;
}