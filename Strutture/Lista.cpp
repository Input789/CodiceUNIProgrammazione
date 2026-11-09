#include <iostream>

using namespace std;

struct lista{
    int val;
    lista *next;
};
typedef lista *plista;

int main(){
    plista head;
    head = new lista;

    head -> val = 13;
    head -> next = NULL;

    

    return 0;
}