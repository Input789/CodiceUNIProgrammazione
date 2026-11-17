#include <iostream>

using namespace std;

struct lista {
    int val;
    lista *next;
};
typedef lista *plista;

int somma_pari (plista p){
    int sum = 0;

    if (p == NULL) return 0;

    while (p != NULL){
        if (p -> val %2 == 0)sum += p -> val;
        p = p -> next;
    }

    return sum;
}

plista inserimento_ordinato(plista p, int x){
    plista pold = NULL;
    plista head = p;
    if (p == NULL){
        plista tmp = new lista;
        tmp -> val = x;
        tmp -> next = p;
        return tmp;
    }
    while ((p != NULL) && (p -> val <= x)){
        pold = p;
        p = p -> next;
    }
    plista tmp = new lista;
    //plista tmp = head;
    tmp -> val = x;
    tmp -> next = p;
    if (pold == NULL) return tmp;
    pold -> next = tmp;
    // tmp = pold -> next;

    return head;
}

plista elimina_duplicati(plista head){
    if (head == NULL) return NULL;
    if (head -> next == NULL) return head;
    plista p1 = head;
    plista p2 = p1 -> next;
    plista p2old = p1;
    for (int i = 0; p1 != NULL; i++){
        for (int j = 0; p2 != NULL; j++){
            if (p2 -> val == p1 -> val){
                p2old -> next = p2 -> next;
                delete p2;
                p2 = p2old -> next;
            }
            else{
                p2old = p2;
                p2 = p2 -> next;
            }
        }
        p1 = p1 -> next;
        if (p1 != NULL){
            p2 = p1 -> next;
            p2old = p1;
        }
    }
    return head;
}

plista head_insert(plista head, int x){
    plista tmp = new lista;
    tmp -> val = x;
    tmp -> next = head;
    return tmp;

}

#define len 14

int main(){
    int sum = 0;
    plista head = NULL;
    for (int i = 0; i<len; i++){
        head = head_insert(head, len - i);
    }
    head = inserimento_ordinato(head, 31);
    head = inserimento_ordinato(head, 41);
    plista p = head;
    sum = somma_pari(head);
    cout<<sum<<endl;
    while (p != NULL){
        cout<<p -> val<<" ";
        p = p -> next; 
    }


}