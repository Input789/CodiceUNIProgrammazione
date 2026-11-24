#include <iostream>

using namespace std;

struct lista{
    int val;
    lista *next;
};
typedef lista *plista;

plista array2list(int a[], int start, int len){
    if (start == len) return NULL;
    plista r = array2list(a, start + 1, len);
    plista n = new lista;
    n -> val = a[start];
    n -> next = r;
    return n;

}

void print_list(plista p){
    while (p != NULL){
        cout<<p -> val<<" ";
        p = p -> next;
    }
    cout<<endl;
}

plista bottom_insert(plista p, int x){
    if (p == NULL){
        plista n = new lista;
        n -> val = x;
        n -> next = NULL;
        return n;
    }
    p -> next = bottom_insert(p -> next, x);
    return p;
}

plista revert_list(plista p){
    if (p == NULL) return NULL;
    plista r = revert_list(p -> next);

    p = bottom_insert(r, p -> val);
    return p;
}

plista invert_inplace(plista p){
    if ((p == NULL) || (p -> next == NULL)) return p;
    plista r = invert_inplace(p -> next);
    p -> next -> next = p;
    p -> next = NULL;

    return r;
}

#define len 40

int main(){

    int a[len];

    for (int i = 0; i<len; i++) a[i] = i;

    plista head = new lista;

    head = array2list(a, 0, len);

    print_list(head);

    head = revert_list(head);

    print_list(head);

    head = invert_inplace(head);

    print_list(head);



    return 0;
}