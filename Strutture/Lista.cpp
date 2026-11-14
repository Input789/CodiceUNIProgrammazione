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

plista remove_last(plista head){
    plista p = head;
    if (head == NULL)return NULL;
    if (head -> next == NULL){
        delete_list(head);
        return NULL;
    } 
    while ((p->next)->next != NULL){
        p = p -> next;
    }
    delete p -> next;
    p -> next = NULL;

    return head;

}

plista remove_doubles(plista head){
    if (head == NULL) return NULL;
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

plista revert(plista h) {

    plista tmp_old = NULL;
    plista tmp = NULL;

    while (h != NULL) {

        tmp = h;
        h = h->next;

        tmp->next = tmp_old;

        tmp_old = tmp;
    }

    return(tmp);
}

plista remove_multiples(plista head, int n){
    plista p = head;
    plista pold = NULL;

    while (p != NULL){
        if (p->val % n == 0){
            if (pold == NULL){
                head = p->next;
                delete p;
                p = head;
            }
            else{
                pold->next = p->next;
                delete p;
                p = pold->next;
            }
        }
        else{
            pold = p;
            p = p->next;
        }
    }

    return head;
}

void crivelloEratostene(bool A[], int n){
    for (int i = 0; i < n; i++)
        A[i] = true;

    A[0] = false;
    A[1] = false;

    for (int i = 2; i < n; i++){
        if (A[i]){
            for (int j = 2 * i; j < n; j = j + i)
                A[j] = false;
        }
    }

    for (int i = 2; i < n; i++){
        if (A[i])
            cout << i << " ";
    }
}

void revert_chars(){
    char c;
    plista p = NULL;
    plista q;

    cin >> c;

    while (c != '.'){
        q = new lista;
        q->val = c;
        q->next = p;
        p = q;

        cin >> c;
    }

    while (p != NULL){
        cout << p->val;
        p = p->next;
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

    head = ordered_insert(head, 41);

    head = ordered_insert(head, 24);

    head = ordered_insert(head, 24);

    head = ordered_insert(head, 24);

    head = remove_doubles(head);

    head = ordered_insert(head, 12);

    head = ordered_insert(head, 36);

    head = ordered_insert(head, 64);

    head = remove_multiples(head, 12);

    //bool a[4];
    //crivelloEratostene(a, 4);
    //revert_chars();

    //head = revert(head);

    head = remove_last(head);

    plista print2 = head;
    while (print2 != NULL){
        cout<<print2 -> val<<" ";
        print2 = print2 -> next;
    }

    //Eliminare tutta la lista
    //delete_list(head);
    //head = NULL;

    //Sei al punto 23, remove_last



    return 0;
}