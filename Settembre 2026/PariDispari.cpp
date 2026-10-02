#include <iostream>
using namespace std;

int main(){
    int a;
    cin>>a;

    if (a%2==0)cout<<1<<endl;
    else cout<<0<<endl;

    cout<<a%2<<endl; //Basta fare così, ma stampa il resto quindi è invertito rispetto a quello che ho fatto prima

    return 0;
}