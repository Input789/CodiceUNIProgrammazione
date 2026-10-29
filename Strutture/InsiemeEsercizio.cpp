#include <iostream>

using namespace std;

const int length = 40;

struct set{
    int data[length];
};

//Usiamo -1 come num_el, come valore sentinella

set empty_set(){
    set tmp;
    tmp.data[0] = -1; //Crea un set vuoto mettendo il primo elemento -1
    return tmp;

}

bool is_in(set a, int x){
    for (int i = 0; a.data[i] != -1; i++){
        if (a.data[i] == x) return true;
    }
    return false;
}

set set_intersection(set a, set b){
    set c = empty_set();
    int cont = 0;
    for (int i = 0; a.data[i] != -1; i++){
        if (is_in(b, a.data[i])){
            c.data[cont] = a.data[i];
            cont++;
        }
    }
    c.data[cont] = -1;
    return(c);
}

set set_union(set a, set b){
    set c = empty_set();
    int cont = 0;
    int i = 0;
    int j = 0;
    while ((((a.data[i] != -1)) || (b.data[j] != -1)) && (cont < length - 1)){
        if (a.data[i] != -1){
            if (!is_in(c, a.data[i])){
                c.data[cont] = a.data[i];
                cont++;
                c.data[cont] = -1;
            }
            i++;
        }
        if ((b.data[j] != -1) && (cont < length - 1)){
            if (!is_in(c, b.data[j])){
                c.data[cont] = b.data[j];
                cont++;
                c.data[cont] = -1;
            }
            j++;
        }
    }

    return c;

}

set add(set a, int x){
    int i = 0;
    if (a.data[0] == -1){
        a.data[0] = x;
        a.data[1] = -1;
        return (a);
    }
    else if (is_in(a, x)) return (a);
    else{
        for (i = 1; a.data[i] != -1; i++){
            continue;
        }
        if (i < length - 1){
            a.data[i] = x;
            a.data[i + 1] = -1;
        }
    }
    return (a);
}

int main(){

    set a = empty_set();
    set b = empty_set();

    set c = empty_set();
    set d = empty_set();

    a.data[0] = 0;
    a.data[1] = 1;
    a.data[2] = 2;
    a.data[3] = -1;
    a = add(a, 3);

    b.data[0] = 1;
    b.data[1] = 2;
    b.data[2] = 3;
    b.data[3] = -1;
    b = add(b, 4);

    if (is_in(a, 1)) cout<<"true"<<endl;
    else cout<<"false"<<endl;

    if (is_in(a, 4)) cout<<"true"<<endl;
    else cout<<"false"<<endl;
    
    if (is_in(b, 1)) cout<<"true"<<endl;
    else cout<<"false"<<endl;
    
    if (is_in(b, 0)) cout<<"true"<<endl;
    else cout<<"false"<<endl;

    c = set_intersection(a, b);
    for (int i = 0; c.data[i] != -1; i++)cout<<c.data[i]<<" ";

    cout<<endl;

    d = set_union(a, b);
    for (int i = 0; d.data[i] != -1; i++)cout<<d.data[i]<<" ";

    return 0;
}