#include <iostream>

using namespace std;

struct lista{
    int val;
    lista *next;
};
typedef lista *plista;

plista head_insert(plista head, int a){
    plista p;

    p = new lista;

    p -> val = a;
    p -> next = head;

    return p;

}

plista bottom_insert(plista head, int a){
    //Parte di Enqueue
    if (head == NULL){
        head = new lista; //Un puntatore NULL non punta al nulla, indica proprio che il puntatore non è stato allocato nella memoria
        head -> val = a;
        head -> next = NULL;
        return head;
    }

    /*Altra versione
        plista p1 = new lista;
        p1 -> val = x;
        p1 -> next = NULL;
        
        if (head == NULL){
            return p1;
        }

        else{
            plista p2 = head;
            while (p2 -> next != NULL){
                p2 = p2 -> next;
            }
            p2 -> next = p1;
            return head;
        }
    
    
    */

    else{
        plista p;
        p = head;

        while (p -> next != NULL){
            p = p -> next;
        }
        p -> next = new lista;
        p = p -> next;
        p -> val = a;
        p -> next = NULL;

        return head;
    }

}

plista ordered_insert(plista head, int a){
    plista tmp = new lista;
    tmp -> val = a;
    tmp -> next = NULL;
    if (head == NULL) return tmp;
    plista p = head;
    plista pold = NULL;
    while ((p != NULL) && (p -> val <= a)){
        pold = p;
        p = p -> next;
    }
    tmp -> next = p;
    if (pold == NULL) return tmp;
    pold -> next = tmp;
    return head;
    

}

plista deleted_value(plista head, int a){
    if (head == NULL) return head;
    plista p = head;
    plista pold = NULL;
    while ((p != NULL) && (p->val != a)){
        pold = p;
        p = p->next;
    } 
    if (p == NULL) return head;
    if (pold == NULL){
        head = p->next;
        delete p;
        return head;
    }
    pold -> next = p -> next;
    delete p;
    return head;
}

void delete_list(plista p){
    plista pold = p;
    while(p != NULL){
        p = p -> next;
        delete pold;
        pold = p;

    }
}

plista crea_lista_ricorsiva(int n){
    plista h = NULL;
    for (int i = 0; i < n; i++){
        h = head_insert(h, i);
    }
    return h;
}

plista crea_lista(int n){
    if (n < 2) return NULL;
    else{
        plista tmp;

        return tmp;
    }
}

int main(){
    plista head;
    head = new lista;

    head -> val = 13;
    head -> next = NULL;

    //Scorrere una lista
    plista p = head;
    while(p != NULL){
        p = p -> next;

    }

    //Stampare una lista
    plista print = head;
    while (print != NULL){
        cout<<print -> val;
        print = print -> next;
    }

    //Inserire un valore in testa
    head = head_insert(head, 14);

    //Inserire un valore in coda
    head = bottom_insert(head, 31);

    //Inserire un valore in una lista già ordinata
    head = ordered_insert(head, 41);

    //Cancellare un valore dalla lista
    head = deleted_value(head, 41);

    //Eliminare tutta la lista
    delete_list(head);
    head = NULL;



    return 0;
}