#include <iostream>

using namespace std;

void string_length(char a[], int len, int &cont){
    for (int i = 0; a[i] != '\0'; i++){
        cont ++;
    }
}

/*
int string_length(char a[], int len){
    int cont = 0;
    for (int i = 0; a[i] != 0; i++){
    cont ++;
    }
    return cont;
}
*/

#define len 40

int main(){
    char a[len];
    int cont = 0;

    cin.getline(a, 40);

    string_length(a, len, cont);

    //cont = string_length(a, len);

    cout<<cont;

    return 0;
}