#include <iostream>

using namespace std;

int main(){
    int n1,n2,n3 = 0;
    char c = '.';
    cin>>n1>>n2>>n3;
    cin>>c;

    cout<<'\t'<<n1<<'\t'<<n2<<'\t'<<n3<<'\t'<<endl;
    if (c == '-'){
        cout<<n1<<'\t'<<n1 - n1<<'\t'<<n1-n2<<'\t'<<n1-n3<<endl;
        cout<<n2<<'\t'<<n2 - n1<<'\t'<<n2-n2<<'\t'<<n2-n3<<endl;
        cout<<n3<<'\t'<<n3 - n1<<'\t'<<n3-n2<<'\t'<<n3-n3<<endl;
    }
    else if (c=='/'){
        cout<<n1<<'\t'<<n1 / n1<<'\t'<<n1/n2<<'\t'<<n1/n3<<endl;
        cout<<n2<<'\t'<<n2 / n1<<'\t'<<n2/n2<<'\t'<<n2/n3<<endl;
        cout<<n3<<'\t'<<n3 / n1<<'\t'<<n3/n2<<'\t'<<n3/n3<<endl;
    }
    else cout<<"Errore di input";

    return 0;
}