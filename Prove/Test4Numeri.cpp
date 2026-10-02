#include <iostream>

using namespace std;

int main(){
    int n1, n2 = 0;
    cin>>n1>>n2;

    for (int i = n1; i<=n2; i++){
        if ((i % 3 == 0) || (i % 5 == 0)) cout<<i<<endl;
    }
}