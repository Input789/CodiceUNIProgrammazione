#include <iostream>

using namespace std;

int main(){

    int n1,n2,n3 = 0;
    cin>>n1>>n2>>n3;

    if (((n2 % n1 == 0) && (n3 % n1 == 0)) || ((n1 % n2 == 0) && (n3 % n2 == 0)) || ((n2 % n3 == 0) && (n1 % n3 == 0))) cout<<true<<endl;
    else cout<<false<<endl;

    cout<<(((n2 % n1 == 0) && (n3 % n1 == 0)) || ((n1 % n2 == 0) && (n3 % n2 == 0)) || ((n2 % n3 == 0) && (n1 % n3 == 0)))<<endl;

    return 0;
}