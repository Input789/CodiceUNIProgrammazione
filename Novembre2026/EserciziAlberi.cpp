#include <iostream>
#include <ctime>

using namespace std ;

const int length = 7;

struct btree {
    int val ;
    btree *ltree ;
    btree *rtree ;
};

typedef btree *pbtree ;

void initialize(int A[], int l){
    srand( time(0) ) ;
    for (int i = 0; i<l ; i = i+1)
        A[i] = rand()%(3*l +1) ;
}

void print_array(int A[], int l){
    for (int i = 0; i < l ; i=i+1)
        cout << A[i] << '\t' ;
    cout << endl ;
}

pbtree initialize_tree(int A[], int left, int right){
    if (left > right) return NULL ;
    else {
        int m = (left+right)/2 ;
        pbtree tmp = new btree ;
        tmp->val = A[m] ;
        tmp->ltree = initialize_tree(A, left, m-1) ;
        tmp->rtree = initialize_tree(A, m+1, right) ;
        return(tmp) ;
    }
}

void print_tree(pbtree t){ // visita infissa sinistra
    if (t != NULL){
        print_tree(t->ltree) ;
        cout << t->val << '\t' ;
        print_tree(t->rtree) ;
    }
}

void print_prof(pbtree t, int conta){
    if (t != NULL){
        if (conta == 0) cout << t->val << '\t' ;
        else {
            print_prof(t->ltree, conta - 1) ;
            print_prof(t->rtree, conta - 1) ;
        }
    }
}

int mult_5(pbtree t){
    if (t == NULL) return(0) ;
    else if ((t->val)%5 == 0) 
        return(1 + mult_5(t->ltree) + mult_5(t->rtree)) ;
    else return(mult_5(t->ltree) + mult_5(t->rtree)) ;
}

int main(){
    int A[length] ;
    initialize(A,length) ;
    pbtree t = initialize_tree(A, 0, length-1) ;
    print_array(A,length) ;
    print_tree(t) ;
    cout << endl ;
    print_prof(t, 3) ;
    cout << endl << mult_5(t) ;

    return(0) ;
}