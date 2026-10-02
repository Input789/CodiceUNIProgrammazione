#include <iostream>
using namespace std;

//Libreria cmath e algorithm
#include <cmath>
#include <algorithm>

int main(){
    double a,b,c = 0.00;
    string s = "";
    cin>>a>>b>>c;
    cin>>s;
    cout<<c<<" "<<b<<" "<<a<<endl; //Inverte i valori

    reverse (s.begin(), s.end()); //Inverte la stringa, il compito secondo me non chiedeva quello, ma mi sembrava troppo facile
    cout<<s<<endl;

    return 0;
}