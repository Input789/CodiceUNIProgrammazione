#include <iostream>

using namespace std;

bool is_in(char a[], int len, char k, int n, int &res){
    for (int i = n; i<len; i++){
        if (a[i] == k){
            res = i;
            return true;
        } 
    }
    return false;
}

int compare_doppio(char a[], int len, int &res){
    for (int i = 0; i<len; i++){
        for (int j = 0; j<len; j++){
            if (is_in(a, len, a[i], i + 1, res)) return res;
        }
    }
    return -1;
}

#define len 4

int main(){
    char a[len];
    int res = 0;

    for (int i = 0; i<len; i++){
        cin>>a[i];
    }

    res = compare_doppio(a, len, res);
    cout<<res;
}