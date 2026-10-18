#include <iostream>

using namespace std;

bool is_in_to_right(int a[], int len, int k, int n){
    for (int i = n; i<len; i++){
        if (a[i] == k) return true;
    }
    return false;
}

bool is_in(int a[], int len, int k, int n){
    for (int i = 0; i<n; i++){
        if (a[i] == k) return true;
    }
    return false;
}

void print_only_one_time(int a[], int len){
    for (int i = 0; i<len; i++){
        if (is_in_to_right(a, len, a[i], i + 1)){
            continue;
        }
        cout<<a[i]<<endl;
    }
}

void print_only_one_time2(int a[], int len){
    bool found = false;
    for (int i = 0; i<len; i++){
        for (int j = i + 1; j<len; j++){
            if (a[i] == a[j]){
                found = true; 
                break;
            }
        }
        if (!found)cout<<a[i]<<endl;
        found = false;
    }
}

void print_only_one_time3(int a[], int len){
    for (int i = 0; i<len; i++){
        if (is_in(a, len, a[i], i)){
            continue;
        }
        cout<<a[i]<<endl;
    }
}

#define len 4

int main(){
    int a[len];
    int k = 0;
    int n = 0;
    bool res = false;

    for (int i = 0; i<len; i++){
        cin>>a[i];
    }

    cin >> k;
    cin >> n;

    res=is_in_to_right(a, len, k, n);

    if (res)cout<<"True"<<endl;
    else cout<<"false"<<endl;

    print_only_one_time(a, len);

    print_only_one_time2(a, len);

    print_only_one_time3(a, len);

    return 0;
}