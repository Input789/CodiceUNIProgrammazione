#include <iostream>
#include <ctime>

using namespace std ;

struct lista {
	int val ;
	lista *next ;
} ;
typedef lista *plista ;

plista head_insert (plista head, int el){
			    plista tmp ;
			    tmp = new lista ;
			    tmp->val = el ;
			    tmp->next = head ;
			    return(tmp) ;
}

// scrivere una funzione che prende in input n e crea una lista 1,2,3,...,n

//Come inizializzare p_old
//H == null
//Ogni valore di h più piccolo di c
//Ogni valore di h più grande di c

plista p_old(){
    while (p != NULL && p->val < c){
        p->old e p;
        p = p-> next;
    }
}

plista crea_lista(int n){
    plista H = NULL ;
    for (int i = n ; i>0 ; i = i-1)
        H = head_insert(H, i) ;
    return(H) ;
}

plista crea_lista_v1(int n){
    plista H = NULL ;
    for (int i = n ; i>0 ; i = i-1){
        plista H_tmp = H ;
        H = new lista ;
        H->val = i ;
        H->next = H_tmp ;
    }
    return(H) ;
}

void stampa_lista_v1(plista h){
    plista tmp = h ;
    while (tmp != NULL){
        cout << tmp->val << '\t' ;
        tmp = tmp->next ;
    }
    cout << endl ;
}

void stampa_lista_v2(plista h){
    while (h != NULL){
        cout << h->val << '\t' ;
        h = h->next ;
    }
    cout << endl ;
}

void stampa_lista_err(plista h){ // questo codice e` sbagliato! PERCHE`?
    while (h->next != NULL){
        cout << h->val << '\t' ;
        h = h->next ;
    }
    cout << h->val << endl ;
}



plista revert(plista h){
    plista tmp_old = NULL ;
    plista tmp = NULL ;
    while (h != NULL){
        tmp = h ;
        h = h->next ;
        tmp->next = tmp_old ;
        tmp_old = tmp ;
    }
    return(tmp) ;
}


int main(){
    plista h1 = crea_lista(3) ;
    plista h2 = crea_lista(0) ;
    plista h3 = crea_lista_v1(3) ;
    plista h4 = crea_lista_v1(0) ;
    stampa_lista_v2(h1) ;
    stampa_lista_v2(h2) ;
    stampa_lista_v2(h3) ;
    stampa_lista_v2(h4) ;
    h3 = crea_lista_v1(10) ;
    stampa_lista_v2(h3) ;
    h3 = revert(h3) ;
    stampa_lista_v2(h3) ;

    return(0) ;
}