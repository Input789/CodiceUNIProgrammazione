#include <iostream>
#include <cctype>

using namespace std;

int main(){
    char c1,c2,c3,c4,c5 = '.';
    int i = 0;

    cin>>c1>>c2>>c3>>c4>>c5;

    if (islower(c1))cout<<"minuscolo"<<endl; else cout<<"maiuscolo"<<endl;
    if (islower(c2))cout<<"minuscolo"<<endl; else cout<<"maiuscolo"<<endl;
    if (islower(c3))cout<<"minuscolo"<<endl; else cout<<"maiuscolo"<<endl;
    if (islower(c4))cout<<"minuscolo"<<endl; else cout<<"maiuscolo"<<endl;
    if (islower(c5))cout<<"minuscolo"<<endl; else cout<<"maiuscolo"<<endl;

    if (c1 >= 'a' && c1 <= 'z')cout<<"minuscolo"<<endl; else cout<<"maiuscolo"<<endl;
    if (c2 >= 'a' && c2 <= 'z')cout<<"minuscolo"<<endl; else cout<<"maiuscolo"<<endl;
    if (c3 >= 'a' && c3 <= 'z')cout<<"minuscolo"<<endl; else cout<<"maiuscolo"<<endl;
    if (c4 >= 'a' && c4 <= 'z')cout<<"minuscolo"<<endl; else cout<<"maiuscolo"<<endl;
    if (c5 >= 'a' && c5 <= 'z')cout<<"minuscolo"<<endl; else cout<<"maiuscolo"<<endl;

    return 0;
}