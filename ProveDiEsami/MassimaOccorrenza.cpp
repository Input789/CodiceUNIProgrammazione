#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int give_occurences(int a[], int l, int len, int cont){
    cont = 0;
    for (int i = 0; i<len; i++){
        if (l == a[i]) cont++;
    }
    return cont;
}

int give_max (int a[], int len, int &na){
    int max = 0;
    int cont = 0;
    for (int i = 0; i<len; i++){
        cont = give_occurences(a, a[i], len, cont);
        if (cont >= max){
            max = cont;
            na = a[i];
        } 
    }
    
    
    return max;
}

#define len 40

int main(){
    int a[len];
    int max = 0;
    int na = 0;

    srand(time(0));

    for (int i = 0; i<len; i++){
        a[i]=rand()%101;
    }

    for (int i = 0; i<len; i++){
        cout<<a[i]<<endl;
    }

    max = give_max(a, len, na);

    cout<<"Il numero n di a che compare più volte è: "<<na<<" e compare "<<max<<" volte";


    return 0;
}