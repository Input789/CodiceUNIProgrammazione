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
    plista p_old = p ; // solo all'inizio p_old e p puntano allo stesso nodo
    while ((p != NULL) && (p->val <= e)){
        p_old = p ;
        p = p->next ;
    }
    if (p == p_old){
        plista tmp = new lista ;
        tmp->val = e ; tmp->next = h ;
        return(tmp) ;
    } else {
        plista tmp = new lista ;
        tmp->val = e ;
        tmp->next = p ;
        p_old->next = tmp ;
        return(h) ;
    }
}

plista remove_first(plista h, int e){
    //if (h == NULL) return NULL;
    
    if (h == NULL)
        return NULL;

    if (h->val == e){
        plista p_old = h;
        h = h->next;
        delete p_old;
        return h;
    }

    plista p_old = h;
    plista p = h->next;

    while ((p != NULL) && (p->val != e)){
        p_old = p;
        p = p->next;
    }

    if (p != NULL){
        p_old->next = p->next;
        delete p;
    }

    return h;
    
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
   int main(){
        plista h1 = crea_lista(5);
        
        cout << "Lista iniziale: ";
        stampa_lista_v2(h1);

        // Provo a rimuovere il primo 3
        h1 = remove_first(h1, 3);

        cout << "Dopo remove_first(h1, 3): ";
        stampa_lista_v2(h1);

        // Provo a rimuovere il primo elemento (1)
        h1 = remove_first(h1, 1);

        cout << "Dopo remove_first(h1, 1): ";
        stampa_lista_v2(h1);

        // Provo a rimuovere un elemento che non esiste
        h1 = remove_first(h1, 10);

        cout << "Dopo remove_first(h1, 10): ";
        stampa_lista_v2(h1);

        return(0);
   }