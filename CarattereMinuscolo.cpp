#include <iostream>
#include <cctype>

using namespace std;

int main(){
    char c1,c2,c3,c4,c5 = '.';

    cin>>c1>>c2>>c3>>c4>>c5;

    if (islower(c1))cout<<"minuscolo"<<endl; else cout<<"maiuscolo"<<endl;
    if (islower(c2))cout<<"minuscolo"<<endl; else cout<<"maiuscolo"<<endl;
    if (islower(c3))cout<<"minuscolo"<<endl; else cout<<"maiuscolo"<<endl;
    if (islower(c4))cout<<"minuscolo"<<endl; else cout<<"maiuscolo"<<endl;
    if (islower(c5))cout<<"minuscolo"<<endl; else cout<<"maiuscolo"<<endl;

    return 0;
}