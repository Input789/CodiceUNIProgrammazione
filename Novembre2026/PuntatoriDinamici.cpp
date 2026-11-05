#include <iostream>

using namespace std;

int main(){
    int *p = new int;
    //int n = 5;, Non ha senso creare una variabile perchè sto usando un puntatore dinamico
    //p = &n;, non va bene, cambi il puntatore

    *p = 5;

    (*p)++;
    
    cout<<*p;

    delete p;

    p = NULL;


    return 0;
}