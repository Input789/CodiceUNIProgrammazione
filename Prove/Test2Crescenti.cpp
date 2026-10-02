#include <iostream>

using namespace std;

int main(){
    double n1, n2, n3, n4 = 0;
    cin>>n1>>n2>>n3>>n4;
    bool res = false;

    if ((n1 < n2) && (n2 < n3) && (n3<n4)) res = true;

    if (res) cout<<"true"<<endl;
    else cout<<"false"<<endl;
}