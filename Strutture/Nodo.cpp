#include <iostream>

using namespace std;

const int length = 40;

struct node {
    char val;
    int next;
};

void print(node a[]){
    int i = 0;
    while (a[i].next != -1){
        cout<<a[i].val<<" ";
        i = a[i].next;
    }
    cout<<a[i].val<<endl;

}

char get_last(node a[]){
    int i = 0;
    while (a[i].next != -1){
        i = a[i].next;
    }
    return (a[i].val);
}

void revert(node a[]){
    int i = 0;
    char b[length]; //Basta un array di char
    int cont = 0;
    if (a[0].next == -1)cout<<"C'è solo un elemento"<<endl;
    else{
        //Memorizzo i valori di a in b
        while (i != -1){
            b[cont] = a[i].val; //Memorizzo i vari A,B,C,D
            cont++;
            i = a[i].next;
        }
        cont--;
        i = 0;
        //Rendo a inversa
        while (i != -1){
            a[i].val = b[cont]; //Metto ad a[i] i vari A B C D
            i = a[i].next; //Seguo l'ordine della mappa
            cont--;
        }
    }

};

void remove_last(node a[]){
    int i = 0;
    if (a[0].next == -1) cout<<"Non posso rimuovere l'ultimo, c'è solo un elemento";
    else{
        while (a[a[i].next].next != -1){
            i = a[i].next;
        }
        a[i].next= -1;
    }
}

int main(){

    node a[length];

    //Main fatto da ChatGPT
    // Creo la lista:
    // A -> B -> C -> D
    //
    // I nodi sono in posizioni non consecutive:
    // 0 -> 3 -> 7 -> 5

    a[0].val = 'A';
    a[0].next = 3;

    a[3].val = 'B';
    a[3].next = 7;

    a[7].val = 'C';
    a[7].next = 5;

    a[5].val = 'D';
    a[5].next = -1;


    cout << "Lista iniziale: ";
    print(a);

    cout << "Ultimo elemento: ";
    cout << get_last(a) << endl;


    cout << "\nDopo revert: ";
    revert(a);
    print(a);


    cout << "Dopo remove_last: ";
    remove_last(a);
    print(a);

    return 0;
}