#include <iostream>

using namespace std;

int number_occurrences(char a[], char l, int len, int cont){
    cont = 0;
    for (int i = 0; i<len; i++){
        if (a[i] == l) cont++;
    }
    return cont;
}

int two_occurrences(char a[], int len){
    int cont = 0;
    int max = 0;
    for (int i = 0; i<len; i++){
        cont = number_occurrences(a, a[i], len, cont);
        if (cont == 2) max ++;
    }

    max /= 2;

    return max;
}

#define len 14

int main(){
    char a[len];
    int cont = 0;

    for (int i = 0; i<len; i++){
        cin.get(a[i]);
    }

    cont = two_occurrences(a, len);

    cout<<cont;

}