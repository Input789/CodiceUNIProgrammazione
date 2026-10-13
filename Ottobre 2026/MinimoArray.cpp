#include <iostream>

using namespace std;

int minimo_valore (int a[], int len){
    int min2 = 100;
    for (int i = 0; i<len; i++){
        if (a[i] <= min2) min2 = a[i];
    }

    return min2;


}

#define len 4

int main(){
    int a [len];
    int min = 100;
    int n = 0;

    for (int i = 0; i<len; i++){
        cin>>n;
        a[i]=n;
    }

    min = minimo_valore(a, len);
    cout<<min;

    return 0;
    
}