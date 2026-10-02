#include <iostream>

using namespace std;

int main(){
    int n = 0;
    int n2 = 0;
    cin>>n;

    for (int i = 0; i<=n; i++){
        for (int j = 0; j<i; j++){
            cout<<"*";
        }
        cout<<endl;
    }

    n2 = n;

    for (int i = 0; i<=n; i++){
        for (int z = n2; z!=0; z--){
            cout<<" ";
        }
        n2--;
        for (int j = 0; j<i; j++){
            cout<<"*";
        }
        cout<<endl;
    }

    n2 = n;

    for (int i = 0; i<=n; i++){
        for (int z = n2; z!=0; z--){
            cout<<" ";
        }
        n2--;
        for (int j = 0; j<2*i-1; j++){
            cout<<"*";
        }
        cout<<endl;
    }
}