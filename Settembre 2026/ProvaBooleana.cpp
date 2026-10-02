#include <iostream>
using namespace std;

int main(){
    bool x = true;
    int a = 0;
    cin>>a;
    if (a%2 == 0) x = true; //Quindi se è pari stampa 1
    else x = false; //Quindi se è dispari stampa 0

    cout<<x<<endl;

    if (x) cout<<"True"; //Best practice per i bool
    else cout<<"False";

    return 0;
}