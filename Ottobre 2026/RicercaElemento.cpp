#include <iostream>

using namespace std;

int binary_search (int a[], int len, int k){ //Si presuppone che l'array sia ordinato
    bool found = false;
    int l = 0;
    int r = len;
    int m = 0;
    while ((l < r) && !found){
        m = (l + r)/2;
        if (a[m] == k) found = true;
        else if (a[m] > k) r = m;
        else l = m + 1;
    }

    if (found) return m;
    else return len;
}

#define len 4

int main(){
    int a[len];
    int k = 0;
    int res = 0;
    for (int i = 0; i<len; i++){
        cin>>a[i];
    }

    cin>>k;

    res = binary_search(a, len, k);
    cout<<a[res];

}