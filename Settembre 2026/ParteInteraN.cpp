#include <iostream>

using namespace std;

int main(){
    int n = 0;
    int i = 0;
    int res = 0;
    cin>>n;

    while (i <= n){
        if((i * i) <= n) res = i;
        i++;
    }

    cout<<res;

    return 0;
}