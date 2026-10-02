#include <iostream>

using namespace std;

int main(){
    int n = 0;
    bool primo = true;

    cin>>n;

    for (int i = 2; i<n; i++){
        if (n == 2) primo = false;
        if (n % i == 0) primo = false;
    }

    if (primo) cout<<"Il numero è primo";
    else cout<<"Il numero non è primo";


    return 0;
}