#include <iostream>

using namespace std;

struct lista {
    int val;
    lista *next;
};
typedef lista *plista;

plista head_insert(plista head, int x){
    plista tmp = new lista;
    tmp -> val = x;
    tmp -> next = head;
    return tmp;

}

#define len 40

int main(){
    plista head = NULL;

    head = head_insert(head, 4);



    return 0;
}