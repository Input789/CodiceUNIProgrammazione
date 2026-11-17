#include <iostream>
#include <algorithm>

using namespace std;

void riempi_array(int a[], int len){
    for (int i = 0; i<len; i++) a[i] = i;

}

void es1(int a[], int len, int x, int &max, int &min){
    int sum_even = 0;
    int cont = 0;
    for (int i = 0; i<len; i++){
        if (a[i] % 2 == 0) sum_even += a[i];
    }
    cout<<"Somma numeri pari: "<<sum_even<<endl;
    for (int i = 0; i<len; i++){
        if (max <= a[i]) max = a[i];
        if (min > a[i]) min = a[i];
    }
    cout<<"Il massimo è: "<<max<<" ed il minimo è: "<<min<<endl;
    for (int i = 0; i<len; i++){
        if (a[i] == x) cont++;
    }
    cout<<"Il valore inserito "<<x<<" compare "<<cont<<" volte"<<endl;

}

void es2(int a[], int len, int &max, int &min){
    int tmp = 0;
    int tmp2 = 0;
    int contmin = 0;
    int contmax = 0;
    for (int i = 0; i<(len / 2); i++){
        tmp = a[i];
        a[i] = a[len - 1 - i];
        a[len - 1 - i] = tmp;
        
    }
    for (int i = 0; i< len; i++){
        if (a[i] == max)contmax = i;
        if (a[i] == min)contmin = i;
    }
    a[contmax] = min;
    a[contmin] = max;
    for (int i = 0; i<len; i++) cout<<a[i]<<" ";
    cout<<endl;
}

void es3(int a[], int len, int v1, int v2, int p1, int p2){
    for (int i = len; i > p1; i--){
        a[i] = a[i - 1];

    }
    a[p1] = v1;
    for (int i = 0; i<len; i++){
        if (a[i] == v2) p2 = i;
    }
    for (int i = p2; i < len - 1; i++){
        a[i] = a[i + 1];
    }
    for (int i = 0; i<len - 2; i++)cout<<a[i]<<" ";
    cout<<endl;
}

void es4(int a[], int len){
    sort(a, a + len);
    for (int i = 0; i < len; i++) cout<<a[i]<<" ";
    cout<<endl;


}

#define len 40

int main(){
    int a[len];
    int min = 100;
    int max = 0;

    riempi_array(a, len - 2);

    for (int i = 0; i<len - 2; i++) cout<<a[i]<<" ";

    cout<<endl;

    es1(a, len - 2, 34, max, min);
    es2(a, len - 2, max, min);
    es3(a, len, 2, 2, 1, 1);
    es4(a, len - 2);

    return 0;
}