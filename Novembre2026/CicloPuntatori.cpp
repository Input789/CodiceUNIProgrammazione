#include <iostream>

using namespace std;

#define len 10

int main(){
    int *p;
    int a[len];
    int n = 0;

    for (int i = 0; i<len; i++){
        p = &a[i]; //P punta all'indirizzo di memoria di a[i]
        cin>>*p; //Modifico p che va a mettere il valore nell'indirizzo di memoria di a[i]

    }

    for (int i = 0; i<len; i++)cout<<a[i]<<" ";

    return 0;
}