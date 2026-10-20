#include <iostream>

using namespace std;

const int length = 4000;

struct stack {int data[length]; int num_el;}; //Definizione della struttura stack

stack new_stack(){ //Crea una pila vuota ε
    stack tmp;
    tmp.num_el = 0;
    return (tmp);
}

bool isempty(stack s){
    return (s.num_el == 0) ;
}

int top (stack s){
    if (s.num_el == 0){
        cout<<"Stack Empty";
        return 0;
    }else{
        return (s.data[s.num_el - 1]);
    }
}

stack push (stack s, int e){
    if (s.num_el == length){
        cout<<"Stack Full";
    }
    else{
        s.data[s.num_el] = e;
        s.num_el += 1;
    } 
    return (s);

}

stack pop (stack s){
    if (s.num_el == 0){
        cout<<"Stack Empty";
    }
    else{
        s.num_el -= 1;
    } 
    return (s);

}

void print (stack s){
    for (int i = 0; i < s.num_el; i++){
        cout<<s.data[i]<<" ";
    }
    cout<<endl;
}

int main(){
    stack s;

    s = new_stack();

    cout<<isempty(s)<<endl;

    // Inizio Main Test ChatGPT

     // Inserisco elementi
    s = push(s, 23);
    s = push(s, 45);
    s = push(s, 67);
    s = push(s, 89);

    cout << "Pila dopo i push: ";
    print(s);

    cout << "Pila vuota? " << isempty(s) << endl;

    // Leggo l'elemento in cima
    cout << "Elemento in cima: " << top(s) << endl;

    // Faccio un pop
    s = pop(s);

    cout << "Pila dopo un pop: ";
    print(s);

    cout << "Elemento in cima: " << top(s) << endl;

    // Altri pop
    s = pop(s);
    s = pop(s);
    s = pop(s);

    cout << "Pila dopo aver tolto tutto: ";
    print(s);

    cout << "Pila vuota? " << isempty(s) << endl;



    return 0;
}