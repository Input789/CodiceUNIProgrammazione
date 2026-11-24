#include <iostream>

using namespace std;

struct list{
    int val;
    list *next;
};
typedef list *plist;

plist build_list(int b, int n){
    if (n == 0) return NULL;
    else{
        plist tmp = new list;
        tmp -> val = b;
        tmp -> next = build_list(b + 1, n - 1);
        return tmp;
    }
}

void print_list(plist p){
    if (p == NULL) cout<<endl;
    else{
        cout<<p -> val<<" ";
        print_list(p -> next);
    }
}

plist append(plist tmp, int n){
    if (tmp == NULL){
        tmp = new list;
        tmp -> val = n;
        tmp -> next = NULL;
        return tmp;
    }
    else{
        tmp -> next = append(tmp -> next, n);
        return tmp;
    }
}

plist build_list_one(int n){
    if (n == 0) return NULL;
    else{
        plist tmp = build_list_one(n - 1);
        return append(tmp, n);
    }
}

plist delete_val(plist a, int x){

    if (a == NULL) return NULL;

    if (a -> val == x){
        plist tmp = a -> next;
        delete a;
        return tmp;
    }

    a -> next = delete_val(a -> next, x);
    return a;

}

plist delete_even(plist a, int cont){

    if (a == NULL) return NULL;
    if (a -> next == NULL) return a;

    a -> next = delete_val(a -> next, a -> next -> val);

    return delete_even(a, cont + 2);


}

int sum_values(int x, int sum){
    if (x <= 0) return sum;
    return sum_values(x / 10, sum + x % 10);

}

bool right_expression(char c[]){
    int i = 0;
    int cont = 0;
    while (c[i] != '\0'){
        if (c[i] == '(') cont ++;
        else if (c[i] == ')')cont--;
        i++;
    }
    if (cont == 0) return true;
    return false;
}

#define len 40

int main(){

    plist a = new list;

    plist b = new list;

    int v = 33;

    a = build_list(0, len);

    b = build_list_one(len);

    print_list(a);

    print_list(b);

    a = delete_even(a, 0);

    print_list(a);

    v = sum_values(v, 0);

    cout<<v;




    return 0;
}