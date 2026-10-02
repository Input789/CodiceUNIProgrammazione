#include <iostream>

using namespace std;

int main(){
    int n1, n2 = 0;
    bool divisore = false;

    cout<<"Inserisci un dividendo: ";
    cin>>n1;

    while (!divisore){
        cout<<"Inserisci un divisore corretto: ";
        cin>>n2;
        if (n1 % n2 == 0){
           cout<<"Divisore corretto";
           divisore = true; 
        } 

    }


    return 0;
}