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

plista crea_lista(int n){
    plista H = NULL ;
    for (int i = n ; i>1 ; i = i-1)
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

plista revert(plista h){ // Questa e` esattamente la funzione che ritorna chatGPT!
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

int get_last(plista h){
    if (h == NULL) return(-1) ;  
    else {
        while (h->next != NULL)
            h = h->next ;
        return(h->val) ;
    }
}

int make_sum_array(int A[], int length){
    int sum = 0 ;
    for (int i = 0; i<length; i = i+1){
        if (A[i]%2 == 0) sum = sum+A[i] ;
    }
    return(sum) ;
}

int make_sum(plista h){
    int sum = 0 ;
    while (h != NULL){
        if ((h->val)%2 == 0) sum = sum+h->val ;
        h = h->next ;
    }
    return(sum) ;
}

plista ordered_insert(plista h, int e){
    plista p = h ;
    plista p_old = p ;     // solo all'inizio p_old e p puntano allo stesso nodo
    while ((p != NULL) && (p->val <= e)){ // short-circuit evaluation: OK!
        p_old = p ;
        p = p->next ;
    }
    if (p == p_old){ // quindi l'iterazione non è mai stata fatta, altrimenti p != p_old 
        plista tmp = new lista ;
        tmp->val = e ; tmp->next = h ;
        return(tmp) ;
    } else {         // quindi p != p_old, l'iterazione è stata fatta almeno una volta
        plista tmp = new lista ;
        tmp->val = e ;
        tmp->next = p ;
        p_old->next = tmp ;
        return(h) ;
    }
}
plista remove_first(plista h, int e){
    if (h == NULL) 
            return(NULL) ;
    else {
        plista p = h ;
        plista p_old = p ;     // solo all'inizio p_old e p puntano allo stesso nodo
        while ((p != NULL) && (p->val != e)){ // short-circuit evaluation: OK!
            p_old = p ;
            p = p->next ;
        }
        if (p == p_old){ // quindi l'iterazione non è mai stata fatta, altrimenti p != p_old 
            p = p->next ;
            delete p_old ;
            return(p) ;
        } else {         // quindi p != p_old, l'iterazione è stata fatta almeno una volta
            if (p != NULL) {
                p_old->next = p->next ;
                delete p ;
            }
            return(h) ;
        }
    }
}

plista remove_all(plista h, int e) {
    if (h == NULL) return(NULL) ;
    else {
        plista p = h ;
        plista p_old = h ;
        while (p != NULL){
            if ((p->val % e) == 0) {
                if (p == p_old) {
                    p = p->next ;
                    delete p_old ;
                    p_old = p ;
                    h = p ;   // bisogna anche aggiornare il puntatore alla testa altrimenti
                              // si rischia di ritornare un dangling pointer!
                } else {
                    p_old->next = p->next ;
                    delete p ;
                    p = p_old->next ; 
                }
            } else {
                p_old = p ;
                p = p->next ;
            }
        }
        if (p == p_old) return(p) ;
        else return(h) ;
    }
}

plista crivello_Eratostene(plista h){
    // PreCondition: h non vuota, inizia da 2 e contiene tutti
    // i valori 2,3,4,...
    plista t = h ;
    while (t != NULL){
        t->next = remove_all(t->next, t->val) ;
        t = t->next ;
    }
    return(h) ;
}

/*
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
    */
   
/*
   int main(){
        plista h1 = crea_lista(5) ;
        plista h2 = crea_lista(0) ;
        stampa_lista_v2(h1) ;
        cout << get_last(h1) << endl ;
        cout << get_last(h2) << endl ;
        cout << make_sum(h1) << '\t' << make_sum(h2) << endl ;
        h1 = ordered_insert(h1,0) ;
        h1 = ordered_insert(h1,3) ;
        h1 = ordered_insert(h1,10) ;
        stampa_lista_v2(h1) ;
        h1 = remove_first(h1,3) ;
        stampa_lista_v2(h1) ;
        h1 = remove_first(h1,11) ;
        stampa_lista_v2(h1) ;
        h1 = remove_first(h1,10) ;
        stampa_lista_v2(h1) ;
        h1 = remove_first(h1,0) ;
        stampa_lista_v2(h1) ;
        h1 = remove_all(h1,2) ;
        stampa_lista_v2(h1) ;
        h1 = remove_all(h1,1) ;
        stampa_lista_v2(h1) ;
        return(0) ;
   }
*/

int main(){
    plista h = crea_lista(100) ;
    h = crivello_Eratostene(h) ;
    stampa_lista_v1(h) ;
    return(0) ;
}