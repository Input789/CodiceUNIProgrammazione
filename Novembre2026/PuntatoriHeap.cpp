#include <iostream>

using namespace std;

int main(){

    int *p_heap = NULL;

    int x = 10;

    int *p_stack = &x; //Punta all'indirizzo di memoria di x

    p_heap = new int; //Allocazione dinamica nell'heap

    *p_heap = 20; //p_heap assume 20

    *p_stack += *p_heap; //Visto che ho messo * e non &, punto al 10 + 20, non agli indirizzi di memoria

    cout<<*p_stack<<endl;
    cout<<*p_heap<<endl;

    delete p_heap; //Cancello p_heap

    p_heap = NULL; //Non lascio la cella di memoria di p_heap con un valore




    return 0;
}